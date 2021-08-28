//442. Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
       vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            int indx = abs(nums[i])-1;
            nums[indx] *= -1;
            if(nums[indx]>0)
                ans.push_back(abs(nums[i]));
                
        }
        return ans;
        
    }
};
// TC--->O(n)
// SC--->O(1)
