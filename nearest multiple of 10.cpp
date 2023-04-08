int nearestMulitple(int n) 
{
    // Write your code here.
    int x = n%10;
    if(x==0) {
        return n;
    }
    else if(x==5) {
        return n-5;
    }
    else if(x<5) {
        return n-x;
    }
    else {
        return n+(10-x);
    }
}

/*
Sample Input 1:
2
36
13
Sample Output 1:
40
10
*/
