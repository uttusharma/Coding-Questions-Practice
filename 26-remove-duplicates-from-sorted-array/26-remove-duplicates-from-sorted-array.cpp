class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        int i = 0 , j = 0;
        while(j<nums.size()){
            nums[i]=nums[j];
            while(j<nums.size() && nums[i]==nums[j])
                j++;
            i++;
        }
        return i;
    }
};

// [1 , 1]
// i    j
