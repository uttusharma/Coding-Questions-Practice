class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums = sorted(enumerate(nums), key=lambda x: x[1])
        left = 0
        right = len(nums) - 1
        while left < right:
            sum = nums[left][1] + nums[right][1]
            if sum == target:
                return [nums[left][0], nums[right][0]]
            elif sum < target:
                left += 1
            else:
                right -= 1
        return []


        # -- ONE PASS HASHMAP -- 
        # seen = {}
        
        # for i in range(len(nums)):
        #     diff = target - nums[i]

        #     if diff in seen:
        #         return [seen[diff], i]
        #     else:
        #         seen[nums[i]] = i
        
        # return []