
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    
    int first = 3;
    int last = 1;
    for(int i=0; i<n; i++){
        for(int j=0;j<m; j++){
            if(i%2==0){
                cout<<"#";
            }
            else{
                if(j==0 && i==first ){
                        cout<<"#";
                        first+=4;

                    }

                 else   if(j==m-1 && i==last){
                        cout<<"#";
                        last+=4;
                    }


                else{
                    cout<<".";
                }
            }
        }
        
        cout<<endl;
    }

}
