// Sol1 --Space inefficeint method
// using 2 data structures and another one to compute final ans
class Solution {
public:
    
    void rec(vector<int>& nums, vector<vector<int>>&ans, vector<int>ds, vector<int>&hash){
        
        // base cond:
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        
      // If our hash array doesn't contain 1 that means that particular element is good to pick. So we pick it and push to our ds.
        for(int i=0; i<nums.size(); i++){
            if(!hash[i]){
                ds.push_back(nums[i]);
                hash[i]=1;
              
              // And then we make a recursive call and pop the element from our ds and mark it 0 again.
                rec(nums, ans, ds, hash);
                hash[i]=0;
                ds.pop_back(); 
            }
        } 
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>ds;
          vector<int>hash(nums.size(), 0);

         rec(nums, ans, ds, hash);
         
        return ans;
    }
};
// TC---> O(n!*n)
// SC --->O(n!+n+n) extra space for returning all permutations and using hash arr & ds
// and auxiliary space of O(n) which is the recursion depth.   

//-----------------------------------------------------

// SOl2-- Space efficient method
class Solution {
public:
    
    void rec(vector<int>& nums, int indx, vector<vector<int>>& ans){
        if(indx == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i=indx; i<nums.size(); i++){
            swap(nums[indx], nums[i]);
            rec(nums, indx+1, ans);
            swap(nums[indx], nums[i]);
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
       
        vector<vector<int>>ans;
        rec(nums, 0, ans);
        return ans;   
    }
};
// TC--->O(n!*n)
// SC--->O(n!) for returning ans

