#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
private:
    int age;
public:
    void Display(){
        cout<<"Name:"<<name<<"Age:"<<age<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int val, string pass){
        if(val < 0){
            return;
        }

        else if(pass=="ABC"){
            age=val;
        }
        
        else{
            return;
        }
    }
};

int main()
{
    //declaring statically
    Student faisal;
    faisal.name="Faisal";
    faisal.setAge(24,"ABC");
    cout<<"Name: "<<faisal.name<<" Age: "<<faisal.getAge()<<endl;


    //declaring dynamically
    Student *robin = new Student;
    robin->name = "Robin";
    robin->setAge(25,"ABC");
    cout<<"Name: "<<robin->name<<" Age: "<<robin->getAge()<<endl;
    robin->setAge(27,"ABC");
    cout<<"New age: "<<robin->getAge()<<endl;
    robin->setAge(29,"ABD"); // it won't work,wrong pass
    cout<<"New age: "<<robin->getAge()<<endl;
    robin->setAge(-2,"ABC");
    cout<<"New age: "<<robin->getAge()<<endl;

   

}