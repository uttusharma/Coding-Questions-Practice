import sys
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        max_so_far = max(nums)
        currMax = 1
        currMin = 1
        
        for i in nums:
            if i == 0:
                currMin, currMax = 1, 1
                continue
            
            temp = i * currMax

            currMax = max(i*currMax, i*currMin, i)
            currMin = min(temp, i*currMin, i)

            max_so_far = max(max_so_far, currMax)

        
        return max_so_far