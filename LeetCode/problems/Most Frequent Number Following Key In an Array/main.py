class Solution:
    def mostFrequent(self, nums: List[int], key: int) -> int:
        d = dict()
        for i in range(len(nums)-1):
            if nums[i] == key:
                if nums[i+1] not in d:
                    d[nums[i+1]] = 1
                else:
                    d[nums[i+1]] += 1
        return max(d, key=d.get)