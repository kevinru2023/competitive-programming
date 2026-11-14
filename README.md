# competitive-programming

My solutions from contests and practice: Codeforces rounds, OSU ACM contests, LeetCode, Project Euler, and dynamic programming drills. Mostly C++ with some Python.

| Folder | What's in it |
|---|---|
| [`codeforces/`](./codeforces) | Codeforces contest/practice problems (C++, Python), plus a `Dockerfile` for a gcc + gdb judge environment |
| [`acm-codeforces/`](./acm-codeforces) | Problems from OSU ACM competitive programming sessions |
| [`acm-squarechallenge/`](./acm-squarechallenge) | OSU ACM "square challenge" problem with test cases |
| [`leetcode/`](./leetcode) | LeetCode solutions (union-find, graphs, greedy) and a reusable template |
| [`projecteuler/`](./projecteuler) | Project Euler #1–5 |
| [`dynamic-programming/`](./dynamic-programming) | Classic DP drills: memoized fib, grid traveler, canSum, dice combinations |

## Running
```sh
g++ -std=c++17 -O2 codeforces/a.cpp -o a && ./a < codeforces/input.txt
python3 leetcode/684.py
```
