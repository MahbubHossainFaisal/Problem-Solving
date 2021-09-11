#include <bits/stdc++.h>
using namespace std;

/*
Static variables are not for the objects of the class.If we declare
an object , that object won't hold the of the static variable as property.
But any object can call/use this property . We can call this 
variable with any object. But as this is a static/global variable
in the class we shouldn't do this. There is a special syntax to 
call the static variables of the class.
Moreover, if we want to modify the static variable , we can do that 
with any object. But if it is modified by one object, it will be changed
for every other object.


*/

class Student{
private:
    static int totalStudent;
public:
    int name;
    int roll;
    

    Student(int name,int roll){
        this->name = name;
        this->roll = roll;
        totalStudent++;
    }

    static int getTotalStudents(){
    return totalStudent;
}
};
//we have to initialize the static variables outside the class like this.
int Student:: totalStudent =0;



int main()
{
    Student s1(12,101);
    Student s2(14,201);
    Student s3(15,301);
    Student s4(16,401);

    cout<<Student::getTotalStudents()<<endl;

}