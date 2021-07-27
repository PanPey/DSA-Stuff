class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double median = 0.0;
        vector<int>a;
        for(auto i : nums1){
            a.push_back(i);
        }
        
        for(auto i : nums2){
            a.push_back(i);
        }
        
        sort(a.begin(), a.end());
        
        int n = a.size();
        
        if(n&1)
          median = a[n/2];
        else 
            median = (a[(n-1)/2]+a[n/2])/2.0;
        return median;
        
    }
};
// Inefficeint sol with O((N+N)log(N+N)) TC and O(N+N) space complexity
//Assuming nums1 and nums2 have upper bound size of N

// Efficient sol using Binary Search

