class Solution:
    def fib(self, n, memo={}):
        if n in memo:
            return memo[n]
        if n <= 2:
            return 1
        memo[n] = self.fib(n-1, memo) + self.fib(n-2, memo) 
        return memo[n] 

if __name__ == "__main__":
    sol = Solution()
    print(sol.fib(50))
    print(sol.fib(6))
    print(sol.fib(3))
    print(sol.fib(2))
