class Solution {
public:
    
    int lis(vector<int>& nums, int n){
    
        vector<int>dp(n);
        dp[0] = 1;      
        for(int i=1; i<n; i++){
            dp[i] = 1;
            for(int j=i-1; j>=0; j--){
                if(nums[j]>=nums[i])
                    continue;
                int best = dp[j]+1;
                if(dp[i]<best)
                    dp[i] = best; 
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
    
    int lengthOfLIS(vector<int>& nums) {
       int n = nums.size();
       return lis(nums, n); 
    }
};
// O(n*n) solution

