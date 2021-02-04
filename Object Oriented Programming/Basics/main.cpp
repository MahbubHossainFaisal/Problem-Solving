
#include <bits/stdc++.h>
using namespace std;

#include "student.cpp";

int main()
{
    //static declaration
    Student s1;
    s1.name="Faisal";
    s1.age=21;

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;

    //dynamic declaration type 1
    Student *s2 = new Student;
    (*s2).name="Robin";
    (*s2).age=23;

    cout<<(*s2).name<<endl;
    cout<<(*s2).age<<endl;

    //dynamic declaration type 2
    Student *s3 = new Student;
    s3->name="Asif";
    s3->age=21;

    cout<<s3->name<<endl;
    cout<<s3->age<<endl;


}
