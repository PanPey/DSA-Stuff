class Solution {
public:
    int trap(vector<int>& a) {
        
        int n = a.size();
        // check for maxLeft and rightMax for each bar
        // and subtract the height of bar with min of maxLeft&rightMax
        // for each bar and add up the result
        
        vector<int>left(n), right(n);
        left[0] = right[n-1] = 0;
        
        int maxVal = a[0];
        
        for(int i=1; i<n; i++){
            left[i] = maxVal;
            maxVal = max(a[i], maxVal);
        }
        
        maxVal = a[n-1];
        
        for(int i=n-2; i>=0; i--){
            right[i] = maxVal;
            maxVal = max(a[i], maxVal);
        }
            
      int ans = 0;
        
        for(int i=0; i<n; i++){
            ans += max(0, min(left[i], right[i])-a[i]);
        }
        
        return ans;
    }
};

// TC ----> O(n)
// SC ----> O(n+n)
