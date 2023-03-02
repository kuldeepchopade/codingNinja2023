#include <bits/stdc++.h> 

void printPattern(int n) {
	// Write your code here.
	cin >> n ;

	for(int i = 0 ; i <= n ; i++) {
		
		for(int j  = 1 ; j <= n -i  ; j++) {
			cout << " " ;
		}
		for(int k = 1 ; k <= 2 *i -1 ; k++){
			cout << "*" ;
		}
		cout << endl ;
	}
}
