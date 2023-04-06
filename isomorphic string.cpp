#include <bits/stdc++.h> 
bool areIsomorphic(string &str1, string &str2)
{
    int n=str1.size();
    int m=str2.size();
    if(m!=n) return false;
    int arr1[256]={0};
    int arr2[256]={0};
    for(int i=0; i<str1.size(); i++)
    {
        if(arr1[str1[i]]!=arr2[str2[i]]) return false;
        arr1[str1[i]]=arr2[str2[i]]=i+1;
    }
    return true;
    
}
/*
Sample Input 1 :
1
aab xxy
Sample Output 1 :
1
*/
