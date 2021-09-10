#include <bits/stdc++.h>
using namespace std;
//When we have a const var or reference var in the class
//we have to initialize them like this.
//else it will give error while executing the code.

class Student{
public: 
  int age;
  const int roll;
  int &x; //reference of age var


  Student(int age,int r) : age(age),roll(r),x(this->age){

  }

 void display(){
    cout<<age<<" "<<roll<<" "<<x<<endl;
  }
};

int main() {
  Student s1(23,101);
  s1.display();
}

