#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    char *name;
    int age;
public:
    Student(char *name , int age){
        //Shallow copy
        this-> name = name;
        this-> age = age;
    }


    void display(){
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};

int main()
{
    char name[] = "Faisal";
    Student s1(name,23);
    s1.display();

    name[2]='y';
    Student s2(s1);

    s2.display();
    s1.display();

    
}