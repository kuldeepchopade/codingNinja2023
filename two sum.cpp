#include<algorithm>
 vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n) 
{
	// Write your code here. 
    vector <pair <int , int > > sum ;
    sort(arr.begin() , arr.end()) ;
    int s =  0 , e = n - 1  ;
    
    while(s < e) {
        int agr = arr[s] + arr[e] ;
        if(agr == target) {
            sum.push_back({arr[s] , arr[e]}) ;
            s++ ;
            e-- ;
        }
        else if(agr<target) {
            s++ ;

        }
        else{
            e-- ;
        }
        
    }
    if(sum.empty()) sum.push_back({-1 , -1}) ;
    return sum ;
}
/*
Sample Input 1 :
2
4 9
2 7 11 13
5 1
1 -1 -1 2 2
Sample Output 1:
2 7
-1 2
-1 2
*/
