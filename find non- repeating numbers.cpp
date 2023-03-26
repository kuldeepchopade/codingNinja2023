int isPresent(int x,vector<int> arr);

vector<int> findNonRepeating(vector<int> arr)

{

	int xors = 0, res1 = 0, res2 = 0, n=arr.size() ;
	vector<int> g1;
	for (int i = 0; i < n; i++){
			xors = xors ^ arr[i];
					}        
	int sn = xors & (~(xors - 1));
	
	for (int i = 0; i < n; i++)	{
		if ((arr[i] & sn) != 0)
			res1 = res1 ^ arr[i];
		else
			res2 = res2 ^ arr[i];
					}         
	g1.push_back(res1);
	g1.push_back(res2);

	return g1;




}
