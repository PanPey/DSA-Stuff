//Stock Span Problem........
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<int>v;
stack<pair<int, int>>s;

int main()
{ 
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

   int t=1;
  // cin >> t;
   while(t--){
   
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

   

    for(int i = 0; i < n; i++){
        if(s.size()==0){
        v.pb(-1);}

        else if(s.size()>0 && s.top().first >= arr[i])
          {v.pb(s.top().second);}

         else if(s.size()>0 && s.top().first < arr[i])
         {
                while(s.size()>0 && s.top().first < arr[i])
                {
                    s.pop();
                }

                if(s.size()==0)
                  {v.pb(-1);}
                
                else 
                  {v.pb(s.top().second);} 

         } 

         s.push({arr[i], i});
         
    }

for(int i=0; i<v.size(); i++){
    cout << i - v[i] << " ";
}

   }
return 0;
}


