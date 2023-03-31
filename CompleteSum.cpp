#include <bits/stdc++.h> 
using namespace std ;
vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
 
    for(int i = 0 ; i <= n ; i++) {

        a[i + 1] = a[i] + a[i + 1] ;
    }
    return a ;
}


