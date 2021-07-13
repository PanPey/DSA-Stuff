#include <bits/stdc++.h>
using namespace std;

int main(){
 
   
 vector<int>a={4,5,6,3,1,4}; //Condsider this vector of size 6
 int n = a.size();
 //Find missing and repeating number from the given array that conatins 1...n numbers

  
 //Using Hashing
 unordered_map<int, int>mp;
 for(auto i : a){
 	mp[i]++;
 }

  int missing=0, repeating=0;

 for(auto i : mp){
 	if(i.second==0)
 		missing = i.first;
 
     if(i.second == 2)
 	  repeating = i.first;
 }

 cout << missing << " " << repeating;  

}


// TC ---> O(n)
// SC ---> O(n)
