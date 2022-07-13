#include <bits/stdc++.h>
#include<math.h>
using namespace std;


void numberOfOccurrance(int arr[], int n,int ele,int index,vector<int> & pos){
    //base case
    if(index==n) {
     return;
    }

    if(arr[index] == ele) pos.push_back(index);
    //cout<<"rec"<<index<<endl;}
    numberOfOccurrance(arr,n,ele,index+1,pos);
    
   
    
}



int main()
{  int n;
   cin>>n;
//   cout<<"HI"<<endl;
   int * arr = new int[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   int ele ;
   cin>>ele; 
   vector<int> pos;
   numberOfOccurrance(arr,n,ele,0,pos);
  //cout<<"Here"<<endl;
  for(int i=0; i<pos.size(); i++){
   cout<<pos[i]<<endl;
  }
  return 0;

}