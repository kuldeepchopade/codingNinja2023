#include <bits/stdc++.h> 

int rowMaxOnes(vector<vector<int>>& mat, int n, int m) {

    int one = 0;

    int ans = 0;

    vector<int> rows;

    for(int i=0;i<n;i++)

    {

        for(int j=0; j<m; j++)

        {

            if(mat[i][j] == 1)

            {

                one++;

            }

        }

        rows.push_back(one);

        one = 0;

    }

    int max = *max_element(rows.begin(), rows.end());

    for(int i=0; i<rows.size(); i++)

    {

        if(rows[i] == max)

        {

            ans = i;

            break;

        }

    }

 

    return ans;

}
/*
Sample Input 2:
2
3 4
0 0 1 1
0 0 1 0
0 1 1 1
2 3
0 1 1
0 1 1    
Sample Output 2:
2
0

*/
