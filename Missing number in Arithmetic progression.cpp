#include <bits/stdc++.h> 
int missingNumber(vector<int> &arr, int n) 
{
    // Write your code here.
   int dif=min(arr[1]-arr[0], arr[2]-arr[1]);
    //finding difference    
    for(int i=1;i<n;i++){    
        if(arr[i]!=arr[0]+i*dif){       
             return arr[0]+i*dif;      
              }   
    }   
    
     return -1; }

/*
Sample Input 1:
2
3
1 4 10
4
5 10 20 25 
Sample Output 1:
 7
 15
*/
