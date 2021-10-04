class Solution {
public:
    int rob(vector<int>& nums) {
       
        int n = nums.size();
        
        if (n == 0)
            return 0;
        
        if (n < 2)
            return nums[0];
        
        vector<int>first(n+1,-1), last(n+1,-1);
        first[0] = last[0] = last[1] = 0;
        first[1] = nums[0];
        
        for(int i=2; i<=n; i++){
            first[i] = max(first[i-2]+nums[i-1], first[i-1]);
            last[i] = max(last[i-2]+nums[i-1], last[i-1]);
        }
        
        return max(first[n-1], last[n]);
        
    }
};
