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

    def find (self, x):
        if x == self.root[x]:
            return x
        return self.find(self.root[x])

    def join(self, x , y):
        rootX = self.find(x)
        rootY = self.find(y)

        if rootX == rootY:
            return False 
        
        else:
            if self.rank[rootX] < self.rank[rootY]:
                self.root[rootX] = rootY
            elif self.rank[rootX] > self.rank[rootY]:
                self.root[rootY] = rootX
            else:
                self.root[rootY] = rootX
                self.rank[rootX] += 1
            self.count -= 1
            return True 

         

class Solution:
    def findRedundantConnection(self, edges: List[List[int]]) -> List[int]:
        n = len(edges) # n should be amount of nodes here 
        uf = UnionFind(n)

        for edge in edges:
            if not uf.join(edge[0] - 1, edge[1] - 1):
                return [edge[0], edge[1]]
        return []


if __name__ == "__main__":
    sol = Solution()
    print(sol.findRedundantConnection([[1, 2], [1, 3], [2, 3]]))  # should return [2,3]
