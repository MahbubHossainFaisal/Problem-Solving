
class Student {

private:
    string name;
    int age;
public:

void setName(string nm){
    cout<<"Give password to access Name property: "<<endl;
    int password;
    cin>>password;

    if(password!=123){
        return;
    }
        name=nm;
    }
string getName(){

    return name;
}

void setAge(int ag){
    cout<<"Give password to access age property: "<<endl;
    int password;
    cin>>password;

    if(password!=123){
        return;
    }
    age=ag;
}

int getAge()
{
    return age;
}

void display()
{
    cout<<"name: "<<name<<" age: "<<age<<endl;
}

};
