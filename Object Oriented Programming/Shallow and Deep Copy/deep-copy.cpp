#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    char *name;
    int age;
public:
    Student(char *name , int age){
        //Deep copy
       this->name = new char[strlen(name)+1];
       strcpy(this->name,name);

       this->age = age;
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

    name[2]='o';
    Student s3(name,27);

    s3.display();
    s2.display();
    s1.display();

    /*
    Here we passing 'name' array while creating objects s1 and
    s2, 
    when they are going to the parameterized constructor,
    it is creating another new char array, copying elements
    from the parameter which has been passed from main function
    while creating objects.
    So, s1.name and s2.name are now pointing to
    different character arrays.
    So, though we change char array 'name' value from
    Faisal to Faysal in main function after 
    declaring object s1 , It didn't change s1.name later
    because s1.name is pointing to another array now who's value is 
    Faisal.

    Same goes for s2 and s3 example.
    We send s2.name = Faysal

    then we again change the main function's char array 'name' property value
    from Faysal to Faosal

    then we send s3.name = Faosal
    but for this , s2 and s1 didn't change because
    both the objects, s1.name and s2.name are pointing to another
    char arrays rather than the main function's char array.

    That's called deep copy

    */


}