#include <iostream>
using namespace std;

struct Term
{
    int coeff;
    int exp;
};

struct Poly
{
    int n;
    struct Term *terms;
};

void create(struct Poly *p)
{
    cout<<"Number of terms?"<<endl;
    cin>>p->n;
    p->terms=new Term();
    cout<<"Enter terms:"<<endl;
    for(int i=0;i<p->n;i++)
    {
        cin>>p->terms[i].coeff>>p->terms[i].exp;
    }
}

void display(struct poly *p)
{
    int i;
    for(i=0;i<p->n;i++)
    {
        cout<<p->terms[i].coeff<<"X"<<p->terms[i].exp<<"+";

    }
    cout<<"0";
    cout<<endl;
}


int main()
{
    struct Poly *p;
    create(&p);
    display(&p);
}
