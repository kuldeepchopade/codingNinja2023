vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
    // Write your code here.
    int K = 1 << (k-1) ;   
    int l = 0, p = -1 , r = 0 ;      
    while ( r < n )       {      
        if ( !(K & arr[r]) ){       
            int p = r ;    
        while ( p > l )  {    
            swap (arr[p] , arr[p-1] ) ;            
            p-- ;           
        }     
            l++ ;   
           }        
             r++ ;   
             
    }      
    return arr ;
}

/*

Sample Input 1:
2
4 1
4 3 2 1
5 2
2 5 1 6 7
Sample Output 1:
4 2 3 1
5 1 2 6 7

*/
