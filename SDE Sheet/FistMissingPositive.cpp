class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        
    set<int>s(A.begin(), A.end());
    int ans =0;
    for(int i=1; i<=A.size()+1; i++){
        if(!s.count(i)){
            ans = i;
            break;
        }
    }
  return ans;
        
    }
};

// TC ---> O(N)
// SC ---> O(N)


// Efficient Sol

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i]){
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1;
    }
};
// TC--->O(n)
// SC--->O(1)
