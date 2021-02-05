
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

    //for static objects destructuring is done with destructure method call
    //but for dynamic allocated object we have to call the delete method.
    delete s3; // this need to be called to delete a dynamic object.



}
