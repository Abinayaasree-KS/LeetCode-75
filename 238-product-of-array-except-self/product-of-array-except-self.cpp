class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,1);
        int leftproduct = 1;
        int rightproduct = 1;
        for(int i=0; i<n; i++){
            output[i] = leftproduct;
            leftproduct *= nums[i];
        }
        for(int i=n-1; i>=0; i--){
            output[i] *= rightproduct;
            rightproduct *= nums[i];
        }
        return output;
    }
};