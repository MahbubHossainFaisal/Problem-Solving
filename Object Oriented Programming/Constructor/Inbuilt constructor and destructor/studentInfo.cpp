

class StudentInfo {

  private:
      int age;
      string name;
  public:
    StudentInfo(){
        this->age = 0; //as "this" is a pointer so to assign values we have to use arrow not dot
        this->name= "not Given";

    }

    StudentInfo(string name,int age)
    {
        this->name=name; //as "this" is a pointer so to assign values we have to use arrow not dot
        this->age=age;
    }

    StudentInfo(int age){
        this->age=age; //as "this" is a pointer so to assign values we have to use arrow not dot
    }

    void display()
    {
        cout<<"Name: "<<this->name<<" Age: "<<this->age<<endl;
    }

    ~StudentInfo(){
        cout<<"Destructuring done"<<endl;
    }


};

