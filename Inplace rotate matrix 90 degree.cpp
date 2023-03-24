#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here    for(int i = 0  ; i < arr.size() ; i++) {
        int n = inputArray.size() ;
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < i ; j++){
            swap(inputArray[i][j] , inputArray[j][i]) ;
            //cout << arr[i] [j] << " " ;
        }
        cout << endl ;
    }
     

    for(int i = 0; i<n/2; i++){
        for(int j = 0; j<n; j++){
            swap(inputArray[i][j], inputArray[n-i-1][j]);

        }
    }
    
}
