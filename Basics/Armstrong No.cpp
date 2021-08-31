#include <bits/stdc++.h>
using namespace std;


bool arms(int n){
   int temp=n, ans=0;


   while(n>0){
     int rm=n%10;
     ans += rm*rm*rm;
     n/=10;
   }

   if(ans==temp)
       return true;
  return false;

}

int main(){

  int n;
  cin >> n;
  int ans=0,count=0;
  for(int i=1; i<1000000;i++){
    if(arms(i))
        count++;
    if(count==n)
    {
      ans = i;
      break;
    }
  }
    cout << ans;
}
