class Solution {
public:
    
    void generator(int n, string s, int open, int close, vector<string>&ans){
    
      // base condition
        if(close==n){
            ans.push_back(s);
            return;
        }
        
        if(open<n){
            generator(n, s+'(',open+1,close, ans);
        }
        
        if(open>close){
            generator(n, s+')',open, close+1, ans);
        }
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        
        int open=0, close=0;
        
        vector<string>ans;
        
        generator(n,"",open,close, ans);
        
        return ans;
        
    }
};
