"""
Write a function `canSum(targetSum, numbers)` that takes in a targetSum 
and an array of numbers as arguments.  The function should return a boolean 
indicating whether or not it is possible to generate the targetSum using numbers 
from the array.  You may use an element of the array as many times as needed.  
You may assume that all input numbers are nonnegative.

ex: 

canSum(7, [5, 3, 4, 7]) -> True 

classic DP problem, it's similar to coin change in Nature
"""

from functools import lru_cache


class Solution:
    def canSum(self, target: int, nums: list[int]) -> bool:
        memo = {}
        def dfs(amount):
            if amount == 0:  # base cases
                return True
            if amount < 0:
                return False 
            if amount in memo:
                return memo[amount]
            # try each path
            for num in nums:
                if dfs(amount - num):
                    memo[amount] = True
                    return True
        
            memo[amount] = False
            return False
        
        return dfs(target) 
if __name__ == "__main__":
    sol = Solution()
    print(sol.canSum(7, [5,3,4,7]))
    print(sol.canSum(7, [2,4]))