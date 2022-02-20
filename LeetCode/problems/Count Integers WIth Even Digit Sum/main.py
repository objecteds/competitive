class Solution:
    def countEven(self, num: int) -> int:
        t = 0
        for i in range(1, num+1):
            s = sum([int(x) for x in str(i)])
            if s % 2 == 0:
                t += 1
        return t
        