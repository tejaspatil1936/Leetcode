class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(wordList.begin(), wordList.end());
        vector<vector<string>> ans;

        if (!words.count(endWord)) return ans;

        unordered_map<string, vector<string>> parents;
        unordered_set<string> current{beginWord};

        while (!current.empty() && !current.count(endWord)) {
            for (const string& word : current) words.erase(word);

            unordered_set<string> next;

            for (const string& word : current) {
                string temp = word;

                for (int i = 0; i < temp.size(); ++i) {
                    char original = temp[i];

                    for (char c = 'a'; c <= 'z'; ++c) {
                        if (c == original) continue;

                        temp[i] = c;

                        if (words.count(temp)) {
                            next.insert(temp);
                            parents[temp].push_back(word);
                        }
                    }

                    temp[i] = original;
                }
            }

            current = move(next);
        }

        if (!current.count(endWord)) return ans;

        vector<string> path{endWord};

        function<void(const string&)> dfs = [&](const string& word) {
            if (word == beginWord) {
                reverse(path.begin(), path.end());
                ans.push_back(path);
                reverse(path.begin(), path.end());
                return;
            }

            for (const string& parent : parents[word]) {
                path.push_back(parent);
                dfs(parent);
                path.pop_back();
            }
        };

        dfs(endWord);
        return ans;
    }
};