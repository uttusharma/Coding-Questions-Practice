class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
       
        # Using prefix and postfix 
        # See : https://www.youtube.com/watch?v=bNvIQI2wAjk
        # https://leetcode.com/problems/product-of-array-except-self/solutions/1342916/3-minute-read-mimicking-an-interview/


        n = len(nums)
        prefix = 1
        postfix = 1

        res = [1] * n

        for i in range(n):
            res[i] = res[i] * prefix
            prefix = prefix * nums[i]

        for i in range(n-1, -1, -1):
            res[i] = res[i] * postfix
            postfix = postfix * nums[i]

        return res