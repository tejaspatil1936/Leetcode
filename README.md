# Leetcode

Personal archive of LeetCode problem solutions in C++, automatically synced from the LeetCode website using the LeetHub browser extension.

## Overview

This repository is a record of LeetCode problems solved over time. Each time a submission is accepted on LeetCode, the [LeetHub v2](https://github.com/arunbhardwaj/LeetHub-2.0) browser extension pushes the solution directly here: it creates a folder for the problem, commits the source file, generates a `README.md` with the original problem statement, and updates the aggregate stats and topic-tag index at the repository root. There is no build step or application to run — this is a solutions log, not a deployable project.

## Features

- One folder per solved problem, named `<number>-<problem-slug>` (e.g. `0036-valid-sudoku`).
- Each problem folder contains the working solution plus a `README.md` with the full problem description, examples, and constraints as scraped from LeetCode.
- Root-level `stats.json` tracks per-problem difficulty and a running count of easy/medium/hard problems solved.
- Root-level `README.md` maintains an auto-generated topic index (below), grouping every solved problem by its LeetCode topic tags.

## Tech Stack

| Category | Details |
| --- | --- |
| Language | C++ |
| Other | [LeetHub v2](https://github.com/arunbhardwaj/LeetHub-2.0) — Chrome extension that auto-commits accepted LeetCode submissions |

## Project Structure

```
Leetcode/
├── 0031-next-permutation/
│   ├── 0031-next-permutation.cpp
│   └── README.md
├── 0036-valid-sudoku/
│   ├── 0036-valid-sudoku.cpp
│   └── README.md
├── 0055-jump-game/
│   ├── 0055-jump-game.cpp
│   └── README.md
├── stats.json
└── README.md
```

Every solution is written as a standalone `Solution` class matching LeetCode's judge signature (for example `class Solution { public: void nextPermutation(vector<int>& nums) { ... } };`). The files intentionally omit a `main()` function or test harness — LeetHub commits exactly what was submitted and accepted on the platform, so each file is a snippet meant to run inside LeetCode's own judge, not standalone.

## Usage

Open a problem folder to see the exact code that was accepted, alongside the original problem statement in its `README.md`. The topic index at the bottom of this file links every solved problem by category, and `stats.json` gives a quick count of problems solved by difficulty.

## Design Decisions

Each solution uses the standard optimal approach for its problem rather than a brute-force one:

- **Next Permutation** (`0031-next-permutation.cpp`): finds the rightmost ascending pair, swaps in the next larger element from the suffix, then reverses the suffix — the in-place, O(n) time, O(1) space algorithm, instead of generating and sorting all permutations.
- **Valid Sudoku** (`0036-valid-sudoku.cpp`): validates rows, columns, and 3x3 boxes in a single pass using one `unordered_set<char>` per row/column/box, with the box index computed as `(i / 3) * 3 + (j / 3)`, avoiding three separate passes over the board.
- **Jump Game** (`0055-jump-game.cpp`): a greedy single pass that tracks the farthest reachable index (`maxReach`), giving O(n) time and O(1) extra space instead of exploring every possible jump path.

## Future Improvements

- Expand coverage beyond the current three medium-difficulty array problems to include easy and hard problems.
- Add solutions for topics not yet represented here, such as strings, trees, graphs, and linked lists.

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0031-next-permutation](https://github.com/tejaspatil1936/Leetcode/tree/master/0031-next-permutation) |
| [0036-valid-sudoku](https://github.com/tejaspatil1936/Leetcode/tree/master/0036-valid-sudoku) |
| [0055-jump-game](https://github.com/tejaspatil1936/Leetcode/tree/master/0055-jump-game) |
| [0120-triangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0120-triangle) |
## Hash Table
|  |
| ------- |
| [0036-valid-sudoku](https://github.com/tejaspatil1936/Leetcode/tree/master/0036-valid-sudoku) |
## Matrix
|  |
| ------- |
| [0036-valid-sudoku](https://github.com/tejaspatil1936/Leetcode/tree/master/0036-valid-sudoku) |
## Two Pointers
|  |
| ------- |
| [0031-next-permutation](https://github.com/tejaspatil1936/Leetcode/tree/master/0031-next-permutation) |
## Dynamic Programming
|  |
| ------- |
| [0055-jump-game](https://github.com/tejaspatil1936/Leetcode/tree/master/0055-jump-game) |
| [0120-triangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0120-triangle) |
## Greedy
|  |
| ------- |
| [0055-jump-game](https://github.com/tejaspatil1936/Leetcode/tree/master/0055-jump-game) |
<!---LeetCode Topics End-->
