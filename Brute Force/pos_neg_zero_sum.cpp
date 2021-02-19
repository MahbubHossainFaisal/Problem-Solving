#include <bits/stdc++.h>
#include <iomanip>

using namespace std;


void Count(vector <int> &v){

  int countPos=0;
  int countZero=0;
  int countNeg = 0;

  for(int i=0;i<v.size();i++){
    if(v[i] == 0){
      countZero++;
    } 
    else if(v[i]>0){
      countPos++;
    }
    else if(v[i]<0){
      countNeg++;
    }
  }
  cout<<countPos<<" "<<countNeg<<" "<<countZero<<endl;
  std::cout << std::setprecision(6) << std::fixed;
  //cout<<v.size()<<endl;
  int length = v.size();
  float posRatio = (float)countPos/(float)length;
  //cout<<posRatio;
  float zeroRatio = (float)countZero/(float)length;
  float negRatio = (float)countNeg/(float)length;

  cout<<posRatio<<endl<<negRatio<<endl<<zeroRatio;

}

int main()
{
  int n;
  cin>>n;
  vector <int> v;

  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }

  Count(v);
}