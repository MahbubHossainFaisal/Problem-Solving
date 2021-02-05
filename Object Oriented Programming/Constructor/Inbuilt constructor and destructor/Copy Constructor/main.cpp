
#include <bits/stdc++.h>
using namespace std;


#include "studentsInfo.cpp";

int main()
{
    //statically
    StudentInfo s1("Anoy",23);
    cout<<"S1: "<<endl;
    s1.display();
    //Copy constructor
    StudentInfo s2(s1);
    cout<<"S2: "<<endl;
    s2.display();

    //dynamically
    StudentInfo *s3 = new StudentInfo("Redwan",21);
    cout<<"s3: "<<endl;
    s3->display();
    //copy constructor.
    StudentInfo s4(*s3);
    cout<<"S4: "<<endl;
    s4.display();

    StudentInfo *s5 = new StudentInfo(s4); // or as parameter u can pass (*s3)
    cout<<"S5: "<<endl;
    s5->display();


}
