from itertools import permutations

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        l = []
        for x in sorted(list(permutations(nums))):
            l.append(list(x))
        return l