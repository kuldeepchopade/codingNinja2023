int maximumSum(vector<int> &a, int n) {

   // Write your code here.

   sort(a.begin(), a.end());

   long long int sum = 0;
    int m = 1e9+7 ;
   for(int i =0; i<n; i++){

        sum = ((sum%m)+((i*a[i])%m))%m;

   }

   return sum;

}
