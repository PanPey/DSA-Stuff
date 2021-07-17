class Solution {
public:
    int majorityElement(vector<int>& a) {
        //Moore's ALgo
        int element=0, cnt=0;
        for(int i=0; i<a.size(); i++){
        if(cnt==0){
            element = a[i]; 
        }
            
            if(element == a[i])
                cnt+=1;
            else
                cnt-=1;
            
       }
        return element;
     }
};

//TC--->O(n)
//SC--->O(1)
