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
| [0037-sudoku-solver](https://github.com/tejaspatil1936/Leetcode/tree/master/0037-sudoku-solver) |
| [0048-rotate-image](https://github.com/tejaspatil1936/Leetcode/tree/master/0048-rotate-image) |
| [0049-group-anagrams](https://github.com/tejaspatil1936/Leetcode/tree/master/0049-group-anagrams) |
| [0051-n-queens](https://github.com/tejaspatil1936/Leetcode/tree/master/0051-n-queens) |
| [0053-maximum-subarray](https://github.com/tejaspatil1936/Leetcode/tree/master/0053-maximum-subarray) |
| [0055-jump-game](https://github.com/tejaspatil1936/Leetcode/tree/master/0055-jump-game) |
| [0057-insert-interval](https://github.com/tejaspatil1936/Leetcode/tree/master/0057-insert-interval) |
| [0073-set-matrix-zeroes](https://github.com/tejaspatil1936/Leetcode/tree/master/0073-set-matrix-zeroes) |
| [0080-remove-duplicates-from-sorted-array-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0080-remove-duplicates-from-sorted-array-ii) |
| [0084-largest-rectangle-in-histogram](https://github.com/tejaspatil1936/Leetcode/tree/master/0084-largest-rectangle-in-histogram) |
| [0085-maximal-rectangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0085-maximal-rectangle) |
| [0120-triangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0120-triangle) |
| [0122-best-time-to-buy-and-sell-stock-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0122-best-time-to-buy-and-sell-stock-ii) |
| [0128-longest-consecutive-sequence](https://github.com/tejaspatil1936/Leetcode/tree/master/0128-longest-consecutive-sequence) |
| [0150-evaluate-reverse-polish-notation](https://github.com/tejaspatil1936/Leetcode/tree/master/0150-evaluate-reverse-polish-notation) |
| [0162-find-peak-element](https://github.com/tejaspatil1936/Leetcode/tree/master/0162-find-peak-element) |
## Hash Table
|  |
| ------- |
| [0036-valid-sudoku](https://github.com/tejaspatil1936/Leetcode/tree/master/0036-valid-sudoku) |
| [0037-sudoku-solver](https://github.com/tejaspatil1936/Leetcode/tree/master/0037-sudoku-solver) |
| [0049-group-anagrams](https://github.com/tejaspatil1936/Leetcode/tree/master/0049-group-anagrams) |
| [0073-set-matrix-zeroes](https://github.com/tejaspatil1936/Leetcode/tree/master/0073-set-matrix-zeroes) |
| [0128-longest-consecutive-sequence](https://github.com/tejaspatil1936/Leetcode/tree/master/0128-longest-consecutive-sequence) |
## Matrix
|  |
| ------- |
| [0036-valid-sudoku](https://github.com/tejaspatil1936/Leetcode/tree/master/0036-valid-sudoku) |
| [0037-sudoku-solver](https://github.com/tejaspatil1936/Leetcode/tree/master/0037-sudoku-solver) |
| [0048-rotate-image](https://github.com/tejaspatil1936/Leetcode/tree/master/0048-rotate-image) |
| [0073-set-matrix-zeroes](https://github.com/tejaspatil1936/Leetcode/tree/master/0073-set-matrix-zeroes) |
| [0085-maximal-rectangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0085-maximal-rectangle) |
## Two Pointers
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
| [0031-next-permutation](https://github.com/tejaspatil1936/Leetcode/tree/master/0031-next-permutation) |
| [0080-remove-duplicates-from-sorted-array-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0080-remove-duplicates-from-sorted-array-ii) |
| [0082-remove-duplicates-from-sorted-list-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0082-remove-duplicates-from-sorted-list-ii) |
## Dynamic Programming
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/tejaspatil1936/Leetcode/tree/master/0010-regular-expression-matching) |
| [0053-maximum-subarray](https://github.com/tejaspatil1936/Leetcode/tree/master/0053-maximum-subarray) |
| [0055-jump-game](https://github.com/tejaspatil1936/Leetcode/tree/master/0055-jump-game) |
| [0062-unique-paths](https://github.com/tejaspatil1936/Leetcode/tree/master/0062-unique-paths) |
| [0085-maximal-rectangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0085-maximal-rectangle) |
| [0095-unique-binary-search-trees-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0095-unique-binary-search-trees-ii) |
| [0097-interleaving-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0097-interleaving-string) |
| [0115-distinct-subsequences](https://github.com/tejaspatil1936/Leetcode/tree/master/0115-distinct-subsequences) |
| [0120-triangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0120-triangle) |
| [0122-best-time-to-buy-and-sell-stock-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0122-best-time-to-buy-and-sell-stock-ii) |
## Greedy
|  |
| ------- |
| [0055-jump-game](https://github.com/tejaspatil1936/Leetcode/tree/master/0055-jump-game) |
| [0122-best-time-to-buy-and-sell-stock-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0122-best-time-to-buy-and-sell-stock-ii) |
## Union-Find
|  |
| ------- |
| [0128-longest-consecutive-sequence](https://github.com/tejaspatil1936/Leetcode/tree/master/0128-longest-consecutive-sequence) |
## String
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/tejaspatil1936/Leetcode/tree/master/0010-regular-expression-matching) |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
| [0049-group-anagrams](https://github.com/tejaspatil1936/Leetcode/tree/master/0049-group-anagrams) |
| [0071-simplify-path](https://github.com/tejaspatil1936/Leetcode/tree/master/0071-simplify-path) |
| [0097-interleaving-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0097-interleaving-string) |
| [0115-distinct-subsequences](https://github.com/tejaspatil1936/Leetcode/tree/master/0115-distinct-subsequences) |
## Recursion
|  |
| ------- |
| [0010-regular-expression-matching](https://github.com/tejaspatil1936/Leetcode/tree/master/0010-regular-expression-matching) |
| [0025-reverse-nodes-in-k-group](https://github.com/tejaspatil1936/Leetcode/tree/master/0025-reverse-nodes-in-k-group) |
## Backtracking
|  |
| ------- |
| [0037-sudoku-solver](https://github.com/tejaspatil1936/Leetcode/tree/master/0037-sudoku-solver) |
| [0051-n-queens](https://github.com/tejaspatil1936/Leetcode/tree/master/0051-n-queens) |
| [0095-unique-binary-search-trees-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0095-unique-binary-search-trees-ii) |
| [0113-path-sum-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0113-path-sum-ii) |
## Sorting
|  |
| ------- |
| [0049-group-anagrams](https://github.com/tejaspatil1936/Leetcode/tree/master/0049-group-anagrams) |
## Tree
|  |
| ------- |
| [0095-unique-binary-search-trees-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0095-unique-binary-search-trees-ii) |
| [0099-recover-binary-search-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0099-recover-binary-search-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/tejaspatil1936/Leetcode/tree/master/0102-binary-tree-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0110-balanced-binary-tree) |
| [0113-path-sum-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0113-path-sum-ii) |
## Depth-First Search
|  |
| ------- |
| [0099-recover-binary-search-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0099-recover-binary-search-tree) |
| [0104-maximum-depth-of-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0110-balanced-binary-tree) |
| [0113-path-sum-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0113-path-sum-ii) |
## Binary Search Tree
|  |
| ------- |
| [0095-unique-binary-search-trees-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0095-unique-binary-search-trees-ii) |
| [0099-recover-binary-search-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0099-recover-binary-search-tree) |
| [0162-find-peak-element](https://github.com/tejaspatil1936/Leetcode/tree/master/0162-find-peak-element) |
## Binary Tree
|  |
| ------- |
| [0095-unique-binary-search-trees-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0095-unique-binary-search-trees-ii) |
| [0099-recover-binary-search-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0099-recover-binary-search-tree) |
| [0102-binary-tree-level-order-traversal](https://github.com/tejaspatil1936/Leetcode/tree/master/0102-binary-tree-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0104-maximum-depth-of-binary-tree) |
| [0110-balanced-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0110-balanced-binary-tree) |
| [0113-path-sum-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0113-path-sum-ii) |
## Math
|  |
| ------- |
| [0029-divide-two-integers](https://github.com/tejaspatil1936/Leetcode/tree/master/0029-divide-two-integers) |
| [0048-rotate-image](https://github.com/tejaspatil1936/Leetcode/tree/master/0048-rotate-image) |
| [0062-unique-paths](https://github.com/tejaspatil1936/Leetcode/tree/master/0062-unique-paths) |
| [0150-evaluate-reverse-polish-notation](https://github.com/tejaspatil1936/Leetcode/tree/master/0150-evaluate-reverse-polish-notation) |
## Bit Manipulation
|  |
| ------- |
| [0029-divide-two-integers](https://github.com/tejaspatil1936/Leetcode/tree/master/0029-divide-two-integers) |
## Breadth-First Search
|  |
| ------- |
| [0102-binary-tree-level-order-traversal](https://github.com/tejaspatil1936/Leetcode/tree/master/0102-binary-tree-level-order-traversal) |
| [0104-maximum-depth-of-binary-tree](https://github.com/tejaspatil1936/Leetcode/tree/master/0104-maximum-depth-of-binary-tree) |
## String Matching
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Z Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Knuth–Morris–Pratt Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Boyer–Moore String-Search Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/tejaspatil1936/Leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Stack
|  |
| ------- |
| [0071-simplify-path](https://github.com/tejaspatil1936/Leetcode/tree/master/0071-simplify-path) |
| [0084-largest-rectangle-in-histogram](https://github.com/tejaspatil1936/Leetcode/tree/master/0084-largest-rectangle-in-histogram) |
| [0085-maximal-rectangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0085-maximal-rectangle) |
| [0150-evaluate-reverse-polish-notation](https://github.com/tejaspatil1936/Leetcode/tree/master/0150-evaluate-reverse-polish-notation) |
## Linked List
|  |
| ------- |
| [0025-reverse-nodes-in-k-group](https://github.com/tejaspatil1936/Leetcode/tree/master/0025-reverse-nodes-in-k-group) |
| [0082-remove-duplicates-from-sorted-list-ii](https://github.com/tejaspatil1936/Leetcode/tree/master/0082-remove-duplicates-from-sorted-list-ii) |
## Monotonic Stack
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/tejaspatil1936/Leetcode/tree/master/0084-largest-rectangle-in-histogram) |
| [0085-maximal-rectangle](https://github.com/tejaspatil1936/Leetcode/tree/master/0085-maximal-rectangle) |
## Divide and Conquer
|  |
| ------- |
| [0053-maximum-subarray](https://github.com/tejaspatil1936/Leetcode/tree/master/0053-maximum-subarray) |
## Range Minimum/Maximum Query
|  |
| ------- |
| [0084-largest-rectangle-in-histogram](https://github.com/tejaspatil1936/Leetcode/tree/master/0084-largest-rectangle-in-histogram) |
## Algorithm X
|  |
| ------- |
| [0037-sudoku-solver](https://github.com/tejaspatil1936/Leetcode/tree/master/0037-sudoku-solver) |
## Dancing Links
|  |
| ------- |
| [0037-sudoku-solver](https://github.com/tejaspatil1936/Leetcode/tree/master/0037-sudoku-solver) |
## Combinatorics
|  |
| ------- |
| [0062-unique-paths](https://github.com/tejaspatil1936/Leetcode/tree/master/0062-unique-paths) |
<!---LeetCode Topics End-->
