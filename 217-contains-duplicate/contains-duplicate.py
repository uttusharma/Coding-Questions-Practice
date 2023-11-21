class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums.sort()

        for i in range(len(nums)):
            if i < len(nums)-1 and nums[i] == nums[i+1]:
                return True

        return False
        