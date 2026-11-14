"""
Your task is to count the number of ways to construct sum n by throwing 
a dice one or more times. Each throw produces an outcome between 1 and  6.

Example: 
For example, if n=3, there are 4 ways:

- 1+1+1
- 1+2
- 2+1
- 3
 """

class Solution: 
    def diceCombinations(self, n):
        MOD = 1e9 + 7
        dp = [0] * (n+1)       
        dp[0] = 1 
        for i in range(1, n+1):
            for j in range(1, 7):
                if i-j >= 0:
                    dp[i] = (dp[i] + dp[i-j]) % MOD
    
        return int(dp[n])

if __name__ == "__main__":
    n = int(input())
    sol = Solution()
    print(sol.diceCombinations(n))