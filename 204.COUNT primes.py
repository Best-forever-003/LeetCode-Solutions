class Solution:
    def countPrimes(self, n: int) -> int:
        i, j = [0] * n,0
        for num in range(2, n):
            if i[num]: continue
            j += 1
            i[num*num:n:num] = [1] * ((n - 1) // num - num + 1)
        return j