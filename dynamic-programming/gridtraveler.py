"""
Say that you are a traveler on a 2D grid. You begin in the top-left corner and your goal is
to travel to the bottom-right corner. You may only move down or right.  In how many ways can
you travel to the goal on a grid with dimensions m * n?
"""


class Solution:
    def __init__(self):
        self.num_of_paths = 0
        self.memo = {}
        
    def gridTraveler(self, m, n):
        if m == 0 or n == 0:
            return 0
        if (m,n) == (1,1):
            return 1
        if (m,n) in self.memo: 
            return self.memo[(m,n)]
        if (n,m) in self.memo:
            return self.memo[(n,m)]
        
        self.memo[(m,n)] = self.gridTraveler(m-1, n) + self.gridTraveler(m, n-1) 
         
        return self.memo[(m,n)]


if __name__ == "__main__":
    sol = Solution()
    print(sol.gridTraveler(2,3))
    print(sol.gridTraveler(4,5))
    print(sol.gridTraveler(18,18))
