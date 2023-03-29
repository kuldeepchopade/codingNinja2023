#include <bits/stdc++.h> 
int minimizeIt(vector<int> A, int K)
{
	// Write your code here 
	
	int n = A.size() ;
	sort(A.begin() , A.end()) ;
	int mini = A[0] ;
	int maxi = A[n - 1] ;
	int ans =( maxi - mini )  ;

	for(int i = 1 ; i < n ; i++) {
		if(A[i] - K < 0) {
			continue;
		}
		maxi= max(A[i -1 ] +K , A[n -1] -K) ;

		mini = min(A[0] + K , A[i] - K) ;

		ans = min (ans , maxi - mini) ;
	}

	return ans ;
	
	
}
