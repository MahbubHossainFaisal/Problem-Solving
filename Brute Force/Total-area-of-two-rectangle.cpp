
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;

    int leftIntersect,rightIntersect,topIntersect,bottomIntersect;
    leftIntersect=max(x1,x3);
    rightIntersect=min(x2,x4);
    bottomIntersect=max(y1,y3);
    topIntersect=min(y2,y4);

    int area1,area2,areaIntersect,result;
    area1=(x2-x1)*(y2-y1);
    area2=(x4-x3)*(y4-y3);
    if(bottomIntersect<topIntersect || leftIntersect<rightIntersect){
        areaIntersect=(rightIntersect-leftIntersect)*(topIntersect-bottomIntersect);
        result= area1+area2-areaIntersect;
        cout<<result;
    }
    else {
        result=area1+area2;
    }
    return 0;


}
