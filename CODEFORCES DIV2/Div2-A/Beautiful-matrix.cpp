#include <bits/stdc++.h>
using namespace std;



int main()
{

   int matrix[5][5]={0};

   for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        int x;
        cin>>x;
        matrix[i][j]=x;
    }
   }


   int i,j;
   int a,b;
   for(i=0;i<5;i++){
   // cout<<i<<" ";
    for(j=0;j<5;j++){

        if(matrix[i][j]==1){
            a=i;
            b=j;
            break;
        }
    }

   }

   int x = abs(a-2);
   int y = abs(b-2);

   cout<<x+y<<endl;
   return 0;
}
