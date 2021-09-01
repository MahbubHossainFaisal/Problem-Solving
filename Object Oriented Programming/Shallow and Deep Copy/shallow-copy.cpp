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
    Student s2(name,25);

    s2.display();
    s1.display();

    /*
        Here first we created s1 object and send name char array as parameter
        value Faisal is sent,
        But then we modified the name char array a little bit
        value becomes Faysal

        then we created s2 object amd send name char array as param,
        value Faysal is sent,

        But when we displayed s1 again with s2 we found that 
        s1.name becomes Faysal too.

        So, what actually happens is,
        the class parameter Student(name), s1(*name), s2(*name) 
        all points to the same address of array 'name'.

        So, any change of the main function's name array,
        will eventually change all the object's name property value .
        It's called shallow copy.

    */
}