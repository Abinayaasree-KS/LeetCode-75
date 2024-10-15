class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n =nums.size();
        int max_count = 0;
        int res = 0, j = 0;
       for(int i = 0; i < n; i++){
        if(nums[i] != 1) 
            max_count++;
        while(max_count > 1 && j<n){
            if(nums[j] != 1)
                max_count--;
            j++;
        }
        res = max(res, i-j);
       }
        return res;
    }
};