#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
stack<pair<int,int>>s;
vector<int>nsl;
vector<int>nsr;
        

 int largestRectangleArea(int heights[], int n) {
        
          //nsl
          for(int i=0; i<n; i++){
            if(s.size()==0){
                nsl.push_back(-1);
            }
            else if(s.size() > 0 && s.top().first < heights[i]){
                nsl.push_back(s.top().second);
            }
            else if(s.size() > 0 && s.top().first >= heights[i]){

                while(s.size() > 0 && s.top().first >= heights[i]){
                    s.pop();
                }
                if(s.size()==0)
                    nsl.push_back(-1);
                else
                    nsl.push_back(s.top().second);
            }
            s.push({heights[i], i});
        }
        
        while(!s.empty()){
            s.pop();
        }
        
        //nsr
        for(int i=n-1; i>=0; i--){
            if(s.size()==0){
                nsr.push_back(n);
            }
            else if(s.size() > 0 && s.top().first < heights[i]){
                nsr.push_back(s.top().second);
            }
            else if(s.size() > 0 && s.top().first >= heights[i]){

                while(s.size() > 0 && s.top().first >= heights[i]){
                    s.pop();
                }
                if(s.size()==0)
                    nsr.push_back(n);
                else
                    nsr.push_back(s.top().second);
            }
            s.push({heights[i], i});
        }
        
        reverse(nsr.begin(), nsr.end());

        vector<int>area(n);
        for(int i=0; i<n; i++){
            area[i] = (nsr[i]-nsl[i]-1)*heights[i]; 
        }
        
        return *max_element(area.begin(), area.end());
        
    }


int main(){
    
int arr[] = {6,2,5,4,5,1,6};
int n = sizeof(arr)/sizeof(arr[0]);

int ans = largestRectangleArea(arr, n);
cout <<ans;

return 0;

}