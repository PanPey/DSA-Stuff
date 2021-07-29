class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        int n = nums.size(); 
        unordered_map<int, int>mp;
        for(int i=0; i<n; i++){
            if(mp.find(target-nums[i])!=mp.end()){
                return {i, mp[target-nums[i]]};
            }
            mp[nums[i]]=i;
        }
    return {};
    }
};

//TC ---> O(n)
//SC ---> O(n)



// two pointer apprach ---- TC---> O(n*log*n) with O(1) space
class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
     
        sort(nums.begin(), nums.end());
        
        int i=0, j=nums.size()-1;
        
        while(i<j){
            if(nums[i]+nums[j] == target){
                return {i, j};
            }
            else if(nums[i]+nums[j]>target)
            {
                j--;
            }
               else
               {
                   i++;
               }
        }
        
        return {};
        
    }
};
