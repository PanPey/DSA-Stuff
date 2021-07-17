class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n = a.size();
        int cnt1=0, cnt2=0;
        int x=-1, y=-1;
        for(int i=0; i<n; i++){
            if(a[i]==x){
                x=a[i];
                cnt1++;
            }
            else if(a[i]==y){
                y=a[i];
                cnt2++;
            }
            
            else if(cnt1==0){
              x=a[i];
              cnt1=1;  
                
            }
            else if(cnt2==0){
               y=a[i];
               cnt2=1; 
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
         
        //checking freq of x and y in array 
        int count1=0, count2=0;
        for(int i=0; i<n; i++){
            if(a[i]==x) count1++;
            else if(a[i]==y) count2++;
        }
        vector<int>ans;
        
        if(count1>n/3) ans.push_back(x);
        if(count2>n/3) ans.push_back(y);
        
       return ans; 
    }
};
