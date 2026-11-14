# You have a graph of n nodes labeled from 0 to n - 1. 
# You are given an integer n and a list of edges where edges[i] = [a_i, b_i] 
# indicates that there is an undirected edge between nodes a_i and b_i in the graph.  
# Return true if the edges of the given graph make up a valid tree, and false otherwise.

from typing import List, Optional, Dict, Tuple
import math
import collections
import heapq
import bisect
import functools


class UnionFind:
    def __init__(self, n):
        self.root = [i for i in range(n)]
        self.rank = [1] * n
        self.count = n

    def find(self, x):
        if self.root[x] == x:
            return x
        return self.find(self.root[x])

    def join(self, x, y):
        rootX = self.find(x)
        rootY = self.find(y)
        if rootX != rootY:
            if self.rank[rootX] < self.rank[rootY]:
                self.root[rootX] = rootY
            elif self.rank[rootX] > self.rank[rootY]:
                self.root[rootY] = rootX
            else:
                self.root[rootY] = rootX
                self.rank[rootX] += 1
            self.count -= 1


class Solution:
    def validTree(self, n: int, edges: List[List[int]]) -> bool:
        uf = UnionFind(n)

        for edge in edges:
            if uf.find(edge[0]) == uf.find(edge[1]):
                return False
            uf.join(edge[0], edge[1])

        return uf.count <= 1


if __name__ == "__main__":
    sol = Solution()
    print(sol.validTree(5, [[0, 1], [0, 2], [0, 3], [1, 4]]))
    print(sol.validTree(5, [[0, 1], [1, 2], [2, 3], [1, 3], [1, 4]]))
