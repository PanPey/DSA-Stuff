
// Sol1:  
class Solution {
public:
    int kthSmallest(vector<vector<int>>& a, int k) {
     
        int n = a.size();
        vector<int>v;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                v.push_back(a[i][j]);
            }
        }
        
      priority_queue<int, vector<int>, greater<int>> pq(v.begin(), v.end());
    
        for(int i=0; i<k-1; i++){
            pq.pop();
        } 
        
        return pq.top();  
      
    }
};

// TC--->O(n*nlogk)
// SC--->O(n*n)

// ---------------------------------------------------------------------------

// P.S.  -->   This is not the most efiifcient solution. They'll be uploaded soon.
