#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,z;
    cin>>x1>>x2>>y1>>y2;
    z=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<z<<endl;
}
