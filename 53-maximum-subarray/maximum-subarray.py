class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # Kadanes Algo
        n = len(nums)
        if n == 1:
            return nums[0]

        max_so_far = nums[0]
        curr_sum = nums[0]

        for i in range(1,n):
            curr_sum = max(nums[i] , curr_sum + nums[i])
            max_so_far = max(max_so_far , curr_sum)

        return max_so_far 


