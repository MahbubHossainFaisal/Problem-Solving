#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int n,m;
    cin>>n>>m;

   long long int group[m] = {0};
   long long int ans=0;
    if(m == 1){
        ans = (n*(n-1))/2;
        cout<<ans<<" "<<ans<<endl;
    }

    else if(m > 1){
        //for minimum
      long long  int j=0;
        for(long long int i=0; i<n ; i++){

            group[j]= group[j]+1;
            j++;
            if(j == m){
                j=0;
            }
        }
      long long  int ans1 = 0;
        for(long long int i=0; i<m ; i++){
            if(group[i] >= 2){
                ans1 += (group[i]*(group[i]-1))/2;
            }

        }

        //for maximum
       long long int numberOfPeople = n;
        for(long long int i=0; i<m-1; i++){
            group[i] = 1;
            --numberOfPeople;
        }

        long long int ans2 = (numberOfPeople*(numberOfPeople-1))/2;


        cout<<ans1<<" "<<ans2<<endl;

    }
    
    return 0;
}