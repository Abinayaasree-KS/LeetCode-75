class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int start = 0;
        int end = n-1;
        sort(nums.begin(),nums.end());
        while(start < end){
            if(nums[start] + nums[end] == k){
                count++;
                start++;
                --end;
            }
            else if (nums[start] + nums[end] > k){
                --end;
            }
            else
            start++;
        }
        return count;
    }
};