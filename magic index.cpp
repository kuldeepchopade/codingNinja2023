#include <bits/stdc++.h> 
int magicIndex(vector<int> a, int n) {
	// Write your code here
	for(int i = 0 ; i <= n  ; i++ ){
		if (a[i] == i) {
			return i ;
			//break ;
		}
		

	}
	return -1 ;

}

/*
Sample Input 1 :
1
5
-5 -1 2 1 9
Sample Output 1 :
2
*/
