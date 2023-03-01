#include <bits/stdc++.h>
using namespace std ;

int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    return (*max_element(arr,arr+n) + *min_element(arr,arr+n)) ;

}
