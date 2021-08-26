#include <bits/stdc++.h>
using namespace std;

class Student{
public:
	string name;
	int age;
};

int main()
{
	//declaring statically
	Student s1;
	s1.name = "Faisal";
	s1.age = 24;

	cout<<s1.name<<endl;
	cout<<s1.age<<endl;


	//declaring Dynamically
	Student *s2 = new Student;
	s2->name = "Robin";
	s2->age = 25;

	cout<<s2->name<<endl;
	cout<<s2->age<<endl;

}