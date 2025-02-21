class Solution:
    def signFunc(self, x):
        if x == 0:
            return 0
        elif x > 0:
            return 1
        else:
            return -1
    def arraySign(self, nums: List[int]) -> int:
        prod = 1
        for i in nums:
            prod *= i
        return self.signFunc(prod)