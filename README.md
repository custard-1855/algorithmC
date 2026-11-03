# algorithmC

『アルゴリズムC』第1〜3巻(R. セジウィック 著、近代科学社)を中心に、アルゴリズムとデータ構造を C や Python などいろいろな言語で実装する学習用リポジトリです。

参照している版: 2000年 初版第5刷(原書 *Algorithms in C*, 1990年 第1版の邦訳)

> 本のコードをそのまま写したものではなく、本を参考にした自作の実装です。

## ディレクトリ構成

テーマ(アルゴリズム)ごとにディレクトリを分け、その中に各言語の実装を並べます。

```
sort/
  quicksort/
    quicksort_recursive.c   # 再帰版
    quicksort_stack.c       # スタックを使った非再帰版
```

## 必要な環境

- C: gcc
- Python: 3.14 以上(標準ライブラリのみ使用)

## 実行方法

C の実行ファイルは `*.out` という名前で出力します(`.gitignore` の対象)。

```sh
cd sort/quicksort
gcc -Wall -O2 -o quicksort_recursive.out quicksort_recursive.c
./quicksort_recursive.out
```

Python:

```sh
python3 quicksort.py
```

## 進捗

章番号と章名は原書第1版のものです。

### 第1巻 基礎・整列

- [ ] Ch.1 Introduction
- [ ] Ch.2 C
- [ ] Ch.3 Elementary Data Structures
- [ ] Ch.4 Trees
- [ ] Ch.5 Recursion
- [ ] Ch.6 Analysis of Algorithms
- [ ] Ch.7 Implementation of Algorithms
- [ ] Ch.8 Elementary Sorting Methods
- [ ] Ch.9 Quicksort — C ✅ / Python
- [ ] Ch.10 Radix Sorting
- [ ] Ch.11 Priority Queues
- [ ] Ch.12 Mergesort
- [ ] Ch.13 External Sorting

### 第2巻 探索・文字列・計算幾何

- [ ] Ch.14 Elementary Searching Methods
- [ ] Ch.15 Balanced Trees
- [ ] Ch.16 Hashing
- [ ] Ch.17 Radix Searching
- [ ] Ch.18 External Searching
- [ ] Ch.19 String Searching
- [ ] Ch.20 Pattern Matching
- [ ] Ch.21 Parsing
- [ ] Ch.22 File Compression
- [ ] Ch.23 Cryptology
- [ ] Ch.24 Elementary Geometric Methods
- [ ] Ch.25 Finding the Convex Hull
- [ ] Ch.26 Range Searching
- [ ] Ch.27 Geometric Intersection
- [ ] Ch.28 Closest-Point Problems

### 第3巻 グラフ・数理・トピックス

- [ ] Ch.29 Elementary Graph Algorithms
- [ ] Ch.30 Connectivity
- [ ] Ch.31 Weighted Graphs
- [ ] Ch.32 Directed Graphs
- [ ] Ch.33 Network Flow
- [ ] Ch.34 Matching
- [ ] Ch.35 Random Numbers
- [ ] Ch.36 Arithmetic
- [ ] Ch.37 Gaussian Elimination
- [ ] Ch.38 Curve Fitting
- [ ] Ch.39 Integration
- [ ] Ch.40 Parallel Algorithms
- [ ] Ch.41 The Fast Fourier Transform
- [ ] Ch.42 Dynamic Programming
- [ ] Ch.43 Linear Programming
- [ ] Ch.44 Exhaustive Search
- [ ] Ch.45 NP-Complete Problems

## ライセンス

[MIT License](LICENSE)
