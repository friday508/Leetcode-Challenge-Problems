class Solution:
    def trailingZeroes(self, n):
        count = 0
        while n >= 5:
            n //= 5
            count += n
        return count

sol = Solution()
print(sol.trailingZeroes(3))  
print(sol.trailingZeroes(5))  
print(sol.trailingZeroes(0))
