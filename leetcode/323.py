from typing import List, Optional, Dict, Tuple
import math
import collections
import heapq
import bisect
import functools


"""
You have a graph of n nodes. You are given an integer n and an array edges
where edges[i] = [ai, bi] indicates that there is an edge between ai and bi in the graph.
Return the number of connected components in the graph.
"""

"""
Assuming this means undirected graph.
"""

class UnionFind:
    def __init__(self, n):
        self.root = [i for i in range(n)]
        self.rank = [1] * n
        self.count = n

    def find(self, x):
        if x == self.root[x]:
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
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        uf = UnionFind(n)
        for edge in edges:
            uf.join(edge[0], edge[1]) 
        return uf.count


if __name__ == "__main__":
    sol = Solution()
    print(sol.countComponents(5, [[0, 1], [1, 2], [3, 4]]))  # return 2
    print(sol.countComponents(5, [[0, 1], [1, 2], [2, 3], [3, 4]]))  # return 1
