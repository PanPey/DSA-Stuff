#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define pb push_back
#define all(x) begin(x),end(x)
#define endl "\n"
#define mod  1000000007
#define fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

string T, P;
int Lp, Lt;

bool match(int L, int R){

   for(int i = 0; i<Lp; i++){
    if(T[i+L]!=P[i]) return false;
   }
   return true;

}


int main()
{
  fast();
  
   ll t;
   cin >> t;

   cin.ignore();
   while(t--){
 
         getline(cin, T);
         getline(cin, P);

         Lp = P.length();
         Lt = T.length();

        
        for(int L=0, R=Lp-1; R<Lt;  L++, R++){
          if(match(L,R))
            cout << L << " ";
        }

       cout << endl;
   }
return 0;
}

/*Input 
1
Where there is a will there is a way!
there

Output
6 22 
*/
