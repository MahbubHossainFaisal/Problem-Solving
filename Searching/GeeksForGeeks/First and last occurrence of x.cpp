#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}





vector<int> find(int arr[], int n , int x )
{
    
    int checker=-1,counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x && checker==-1){
            checker=i;
            counter++;
        }
       else if(arr[i] == x ){
            counter++;
        }
    }
    vector<int> v;
if(checker == -1){
    v.push_back(-1);
    v.push_back(-1);
    return v;
}
    
    
   else{
        int firstOccur = checker;
    int lastOccur = checker+counter-1;
    
    v.push_back(firstOccur);
    v.push_back(lastOccur);
    return v;
   }
}