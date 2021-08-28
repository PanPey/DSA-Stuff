// 3. Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int start=0, ans=0;
       unordered_map<char, int>map;
       for(int i=0; i<s.length(); i++){
           if(map.count(s[i]) && map[s[i]]>=start)
               start = 1 + map[s[i]];
           
           map[s[i]] = i;
           ans = max(ans, i-start+1);
       } 
        
        return ans;
        
    }
};
// TC--->O(n)
// SC--->O(1)
