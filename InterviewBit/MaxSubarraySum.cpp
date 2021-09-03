int Solution::maxSubArray(const vector<int> &A) {

    int maxOverall = INT_MIN;
    int maxTillnow = 0;

    for(int i=0; i<A.size(); i++){
        maxTillnow += A[i];
        if(maxTillnow>maxOverall)
          maxOverall = maxTillnow;
        if(maxTillnow<0)
          maxTillnow = 0;   
    }
   
return maxOverall;

}
