#include <bits/stdc++.h> 
string upperCase(string &str)
{
    // Write your code here.
    //vector < string > ptr ;
    for(int i = 0 ; i < str.length() ; i++) {
        str[i] = str[i] -'a' + 'A' ; 
    }
    return str ;
}
