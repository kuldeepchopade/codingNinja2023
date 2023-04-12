#include <bits/stdc++.h> 
int beautifulIndex(int N, vector<int> A)
{
    // first find sum of array

    int sumarr=0 ;

    for(int i=0; i<N; i++)

    {

        sumarr= sumarr + A[i];

    }

    int left=0;

    for(int i=0; i<N; i++)

    {

        int right=sumarr;

         

         if(left == right-left-A[i])

         return i+1;



         left+=A[i];

    }

    return -1;

}
/*
Sample Input-1
2
3
1 1 1
3
1 2 3
Sample Output-1
2
-1


*/
