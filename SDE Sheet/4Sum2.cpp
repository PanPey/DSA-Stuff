class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
  
        // We inser nums1[i]+nums[j] in a hastable and check whether its compliment exist later on
        unordered_map<int, int>mp;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                mp[nums1[i]+nums2[j]]++;
            }
        }
        int ans=0;
        for(int i=0; i<nums3.size(); i++){
            for(int j=0; j<nums4.size(); j++){
            
                auto it = mp.find(0 - nums3[i] - nums4[j]);
                if(it != mp.end()) {
                    ans += it->second;
            }
         }
         
        }
        
       return ans;
    }
};

// TC---> O(n*n)
// SC---> O(n)
