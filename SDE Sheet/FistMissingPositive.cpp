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
