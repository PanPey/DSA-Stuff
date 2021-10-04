class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
      
    int n = cost.size();
        	
	int one = cost[0];
	int two = cost[1];
	if (n<=2) 
        return min(one, two);
        
	for (int i=2; i<n; i++) {
		int curr = cost[i] + min(one, two);
		one = two;
		two = curr;
	}
	return min(one, two);
                      
    }
};
