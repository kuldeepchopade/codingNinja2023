#include <bits/stdc++.h> 
string calculateFactorial(int n)
{
    //    Write your code here.
    string ans;
    ans.push_back('1');
    
    for(int i = 2; i<=n; i++){
        
        int carry = 0;
        
        for(int j = 0; j<ans.size(); j++){
            
            int sum = (ans[j]-'0')*i + carry;
            ans[j] = sum%10+'0';
            carry = sum/10;
        }
        
        while(carry>0){
            ans.push_back(carry%10+'0');
            carry/=10;
        }
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
