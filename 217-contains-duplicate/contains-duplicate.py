class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # Hash set crazy method 2
        return len(set(nums))!=len(nums)


        # Hash set method 1
        # seen = set()

        # for i in nums:
        #     if i in seen:
        #         return True
        #     else:
        #         seen.add(i)
        
        # return False


        # Sorting method

        # nums.sort()
        # for i in range(len(nums)):
        #     if i < len(nums)-1 and nums[i] == nums[i+1]:
        #         return True

        # return False
        