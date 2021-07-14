#include <bits/stdc++.h>
using namespace std;

void solve(){
 vector<int>a={-2,1,-3,4,-1,2,1,-5,4};
 //Kadane's aLgo:
  int sum=0, ans=INT_MIN;
  for(int i=0; i<a.size(); i++){
    sum+=a[i];
    ans=max(ans, sum);
    if(sum<0) sum=0;
  }
    cout << ans;

}
int main(){
	int test=1;
	//cin >> test;
	while(test--){
		solve();
	}
}
// TC ---> O(n)
// SC ---> O(1)
