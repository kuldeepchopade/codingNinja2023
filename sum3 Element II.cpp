vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector <vector <int >> ans ;
	sort(arr.begin() , arr.end()) ;

	for(int i = 0 ; i < n - 2 ; i++) {
		if(i == 0 || i > 0 && arr[i] != arr[i -1 ]) {
			int low = i +1 ;
			int high = n - 1;
			int target = K - arr[i] ;

			while(low < high) {
				if(arr[low] + arr[high] == target){
					vector <int > temp ;
					temp.push_back(arr[i]) ;
					temp.push_back(arr[low]) ;
					temp.push_back(arr[high]) ;
					ans.push_back(temp) ;

					while(low < high && arr[low] == arr[low+ 1]) low++ ;

					while(low < high && arr[high] == arr[high - 1] ) high-- ;

					low++;
					high--;

				}
				else if(arr[low] + arr[high] < target) low++;

				else high-- ;

			}
		}
	}
	return ans ;

}
