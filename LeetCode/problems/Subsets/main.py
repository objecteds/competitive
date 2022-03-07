class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        l = []
        for i in range(1<<len(nums)):
            subset = []
            for j in range(len(nums)):
                if i & (1<<j):
                    subset.append(nums[j])
            l.append(subset)
        return l