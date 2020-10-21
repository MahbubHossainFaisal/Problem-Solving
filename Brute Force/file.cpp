
#include<iostream>
#include<fstream>


using namespace std;


int main()
{
    ofstream write;
    write.open("task.txt");
    int num;
    cout<<"Give number of students: "<<endl;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        string name,marks;
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter marks: "<<endl;
        cin>>marks;
        write << name;
        write <<" ";
        write <<marks;
        write <<"\n";
    }
    write.close();
    cout<<"Information has been written"<<endl;
    string read;
    ifstream check ("task.txt");
    if(check.is_open())
    {
        while(getline(check,read))
        {
            cout<<read<<" ";
        }
        check.close();
    }
    else
    {
        cout<<"Unable to open"<<endl;
    }



}

