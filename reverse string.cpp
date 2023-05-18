#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
	string x = "" ;
	for(int i = str.length() -1 ; i >= 0 ; i--) {
		x.push_back(str[i]) ;
	} 
	return x ;
}
