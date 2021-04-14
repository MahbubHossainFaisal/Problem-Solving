class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        int temp=0;
        unordered_map<int,int> m;
        bool checker =0;
        
        for(int i=0; i<n; i++){
            temp += arr[i];
            if(temp == 0 or m[temp]==1 or arr[i] == 0){
                checker = 1;
                return checker;
            }
            else{
                m[temp]=1;
            }
        }
        return checker;
        
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  