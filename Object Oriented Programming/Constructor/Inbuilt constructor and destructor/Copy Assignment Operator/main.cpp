
#include <bits/stdc++.h>
using namespace std;


#include "studentInfo.cpp";

int main()
{

    StudentInfo s1("Babul",54);
    StudentInfo s2("Hosna",51);
    cout<<"s2: "<<endl;
    s2.display();

    StudentInfo *s3 = new StudentInfo;

    s2=s1;
    cout<<"s2: "<<endl;
    s2.display();

    *s3=s2;
    cout<<"s3: "<<endl;
    s3->display();



}
