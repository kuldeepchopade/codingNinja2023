#include <bits/stdc++.h> 
int palindrome(vector<int> A)
{
	// Write your code here.
	int s = 0 ;
	int n = A.size() ;
		
	int e = n - 1 ;

	int count = 0;
	long long left = A[0] , right = A [n - 1 ] ;
	while(s < e) {
		if(left == right) {
			s++;
			e-- ;
			left = A[s] ;
			right = A [e] ;
		}
		else if (left < right) {
			count++ ;
			left = left + A[s + 1] ;
			s++ ;

		}
		else  {
			count++ ;
			right = right + A[e - 1] ;
			e-- ;
		}
	
	}
	return count ;
}

/*
Sample Input -2
2
1
8
3
1 3 3
Sample Output -2
0
2
*/




