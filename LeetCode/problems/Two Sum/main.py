class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = dict()
        for i in range(len(nums)):
            c = target - nums[i]
            if c in d:
                return [d[c], i]
            d[nums[i]] = i
        