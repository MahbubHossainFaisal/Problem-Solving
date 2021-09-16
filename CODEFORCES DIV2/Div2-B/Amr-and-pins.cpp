#include <bits/stdc++.h>
using namespace std;



int main()
{

  double r,x1,x2,y1,y2;
  cin>>r>>x1>>y1>>x2>>y2;

  int ans = ceil(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/(2.000*r));
  cout<<ans;
  return 0;
}
