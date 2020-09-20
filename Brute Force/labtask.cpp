#include<iostream>
using namespace std;

void array_input()
{
    int a[10];

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
}

void array_output()
{   int a[10];


    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
  cout<<endl;

}
void print_reverse()
{
    int a[10];
    for(int i=9;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insert_end()
{    int a[10];
    int n=10;
    int b;
    cout<<"Give a number to insert at end"<<endl;
    cin>>b;
    a[n++]=b;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

void insert_position()
{  int a[10];
    int position;
    cout<<"Give position:"<<endl;
    cin>>position;
    for(int i=11;i>position;i--)
    {
        a[i]=a[i-1];
    }
    cout<<"Give a value: "<<endl;
    int x;
    cin>>x;
    a[position]=x;
    cout<<endl;


}

void delete_end()
{
  int a[10];
int  n=10;
  n--;
  cout<<"After deleting:"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
}

void delete_x()
{
    int a[10];
    int n,y;
    n=10;
    cout<<"which data u want to delete?"<<endl;

    cout<<"Give that position of that data"<<endl;
    cin>>y;
    for(int i=y;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n--];
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void highest_lowest()
{
    int a[10];
    int count;
    count=a[0];
    for(int i=0;i<10;i++)
    {  if(a[i]>count)
    {
        count=a[i];
    }

    }
    cout<<"Highest value is :"<<count<<endl;

    for(int i=0;i<10;i++)
    {  if(a[i]<count)
    {
        count=a[i];
    }

    }
    cout<<"Lowest value is :"<<count<<endl;
}

void count_data()
{   int x;
cout<<"Give array size"<<endl;
cin>>x;
int count=0;
    int a[x];


    for(int i=0;i<x;i++)
    {
        count++;
        if(a[i]==NULL)
        {
            break;
        }
    }
    cout<<count<<endl;
}

void search_x()
{   int a[10];
    cout<<"Give a number to search"<<endl;
    int x;
    cin>>x;
    for(int i=0;i<9;i++)
    {
        if(a[i]==x)
        {
            cout<<"found"<<endl;
        }
        else
            cout<<"Not found"<<endl;
    }
}

int main()
{
    array_input();
    array_output();
    print_reverse();
    insert_end();
}
