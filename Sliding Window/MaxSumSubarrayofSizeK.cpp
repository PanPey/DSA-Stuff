
int maxSubArrayofSizeK(int n, vector<int>a, int k){
 
  int sum=0; // current window sum 
  int mx = INT_MIN; // overall max sum

  int i=0,j=0;

  while(j<n){

    sum += a[j];

    if(j-i+1<k) // if we have not reached window length 
        j++;

    else if(j-i+1==k) // once window length is hit then slide the window
    {
        mx = max(mx, sum);
        sum -= a[i];
        i++;
        j++;
    }

  }

 return mx;

}
// TC --->O(N)
// SC --->O(1)
