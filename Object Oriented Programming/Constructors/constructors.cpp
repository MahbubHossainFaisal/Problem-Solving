#include <bits/stdc++.h>
using namespace std;

class Student{
private:
    int studentAge;
    int studentRoll;
public:
   Student(){
        studentAge=10;
        studentRoll=101;
    } 

    Student(int studentAge,int studentRoll){
        this->studentAge = studentAge;
        this->studentRoll= studentRoll;
    }

    void Display(){
        cout<<"Age: "<<studentAge<<endl;
        cout<<"Roll number: "<<studentRoll<<endl;
    }

    void setAge(int age){
        studentAge = age;
    }
    int getAge(){
        return studentAge;
    }

    void setRoll(int roll){
        studentRoll = roll;
    }
    int getRoll(){
        return studentRoll;
    }


};

int main()
{
    
    //This will call default constructor
    Student s1;
    s1.Display();
    //This will also called default constructor
    Student *s2 = new Student;
    s2->Display();
    //values can be modified using setters
    s2->setAge(20);
    s2->setRoll(201);
    s2->Display();
    //values can be accessed using getters
    cout<<"Student 2 age"<<s2->getAge()<<endl;
    cout<<"Student 2 roll number "<<s2->getRoll()<<endl; 

    //parameterized constructor
    Student s3(30,301);
    s3.Display();


}