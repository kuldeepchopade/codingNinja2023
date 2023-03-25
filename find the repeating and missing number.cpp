vector<int> findRepeatingAndMissingNumbers(vector<int> nums)
{
    // Write your code here.

    int n = nums.size() ;
    int arr[n+1];    
    vector<int> ans;
        for(int i=0;i<n+1;i++)  {        
            if(i==0) {            
                arr[i]=1;        
            }        
            else        {            
                arr[i]=0;        
            }   
        }    
        for(int i=0;i<n;i++)    {        
            arr[nums[i]]++;    
        }    
        for(int i=0;i<n+1;i++)    {        
            if(arr[i]>1)        {            
                ans.push_back(i);        
            }    
        }    
        for(int i=0;i<n+1;i++)    {        
            if(arr[i]==0)        {            
                ans.push_back(i);        
            }    
        }    
        return ans; 
    




}
