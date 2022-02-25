class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        best, total = -999999999999999999, 0
        for x in nums:
            total = max(x, x+total)
            best = max(best, total)
        return best
        