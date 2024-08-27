class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        int end = 0;
        int n = nums.size();
        int h = n-1;
        while(h >= end)
        {
            if(nums[end] !=0)
            {
                swap(nums[start], nums[end]);
                start++;
            }
            end++;
        }
        
    }
};