#include<iostream>
using namespace std;

class Element
{
public:
    int a;
    int b;
    int x;
};

class Sparse
{
private:
    int m,n,num;
    Element *ele;
public:
    Sparse(int m,int n,int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        ele=new Element[this->num];

    }

    ~Sparse()
    {
        delete []ele;
    }

    void read()
    {
        cout<<"Enter the non-zero elements:"<<endl;
        for(int i=0;i<num;i++)
        {
            cin>>ele[i].a>>ele[i].b>>ele[i].x;
        }
    }

    void display()
    {
        int k=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ele[k].a==i && ele[k].b==j)
                {
                    cout<<ele[k++].x<<" ";
                }
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
};


int main()
{
    Sparse s1(5,5,5);
    s1.read();
    s1.display();

}