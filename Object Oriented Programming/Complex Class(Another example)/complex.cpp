#include <bits/stdc++.h>
using namespace std;

class ComplexNumbers{
private:
    int real;
    int imaginary;
public:
  
    ComplexNumbers(int real,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    void sum(ComplexNumbers const &c2){
        real = real+ c2.real;
        imaginary = imaginary+ c2.imaginary;
    }
    void multiply(int const &val){
        real = real*val;
        imaginary = imaginary*val;
    }
};


int main()
{
   int real1,real2,imaginary1,imaginary2;
   cin>>real1>>real2;
   cin>>imaginary1>>imaginary2;

   ComplexNumbers c1(real1,imaginary1);
   ComplexNumbers c2(real2,imaginary2);

   cout<<"First value of c1"<<endl;
   c1.print();
   cout<<"First value of c2"<<endl;
   c2.print();

   c1.sum(c2);
   cout<<"After addition the value of c1"<<endl;
   c1.print();

   c1.multiply(4);
   cout<<"After multiplication the value of c2"<<endl;
   c1.print();
}