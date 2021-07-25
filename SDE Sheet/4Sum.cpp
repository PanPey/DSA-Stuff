class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>>ans;
        
        vector<int>quad(4,0);
        
        for(int i=0; i<n; i++){
       
            for(int j=i+1; j<n; j++){
        
                int x = target - nums[i] - nums[j];
                
                int left=j+1, right=n-1;
                
                while(left<right){
                
                    int y = nums[left]+nums[right];
                        if(x == y){
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[left];
                        quad[3] = nums[right];
                        ans.push_back(quad);
                        
                        while(left < right && nums[left]==quad[2]) ++left;
            
                            while(left < right && nums[right]==quad[3]) --right;
                       }
                      else if(x<y){
                         right--;
                      }
                      else
                          left++;
                   }       
                            while(j+1 < n && nums[j+1]==nums[j]) ++j;
                
                            while(i+1 <n && nums[i+1]==nums[i]) ++i;
                    
               } 
           }
         
            return ans;
        
    }
};

// TC ---> O(n*n*n) 
// SC ---> O(1) if we ignore the ans vector that we return as our output
