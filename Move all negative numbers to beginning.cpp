#include <bits/stdc++.h> 

vector<int> separateNegativeAndPositive(vector<int> &nums){

    

    //Two pointer method

    int s= 0;

    int e = nums.size()-1;

    

    while( s < e){

        

        while( nums[s] < 0 && s <e){ s++;}

        while( nums[e] >= 0 && s< e){ e--;}

        

        if( s<e){ 

            swap(nums[s] ,nums[e]) ;

            s++;

            e--;

        }

 

    }

    return nums;

}
