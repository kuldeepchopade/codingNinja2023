#include <bits/stdc++.h> 
vector < int > sqsorted(vector < int > & arr) {
    // Write your code here.
    vector<int> ans(arr.size());
    int n = arr.size();
    
    int left = 0;
    int right = n-1;
    
    for(int i=n-1; i>=0; i--){
        if(abs(arr[left])>abs(arr[right])){
            ans[i] = arr[left] * arr[left];
            left++;
        }
        else{
            ans[i] = arr[right] * arr[right];
            right--;
        }
    }
    
    return ans;
}

/*
Sample Input 1:
2
4 
-3 -3 1 2
6 
0 1 2 3 4 5 
Sample Output 1:
1 4 9 9 
0 1 4 9 16 25

*/
