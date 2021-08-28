// 209. Minimum Size Subarray Sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int start=0, sum=0, ans=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(sum>=target){
                ans = min(ans, i-start+1);
                sum = sum - nums[start];
                start++;
            }
        }
        
        if(ans!=INT_MAX)
            return ans;
        return 0;
        
    }
};
// TC-->O(n)
// SC-->O(1)
