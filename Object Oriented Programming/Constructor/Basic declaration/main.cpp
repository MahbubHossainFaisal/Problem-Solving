#include <bits/stdc++.h>
using namespace std;

#include "studentInformation.cpp";

int main()
{
    StudentInfo s1;
    s1.display();

    StudentInfo *s2 = new StudentInfo(10);
    s2->display();

    StudentInfo s3("Abhram",32);
    s3.display();
}
