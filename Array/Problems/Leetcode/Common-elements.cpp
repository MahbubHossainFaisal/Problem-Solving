class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        int i=0;
        int j=0;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vector<int> ans;
        while(i<=v1.size() && j<=v2.size()){
            int x = v1[i];
            int y = v2[j];
            if(x < y){
                i++;
            }
            else if(x > y){
                j++;
            }
            else{
                ans.push_back(x);
                i++;
                j++;
            }
        }
        return ans;
    }
};




int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  