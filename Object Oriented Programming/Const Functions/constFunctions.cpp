#include <bits/stdc++.h>
using namespace std;

/*
When we declare an const object , we cannot change the property of
that object later.And those constant object can only use the functions
of the class which will not do anything for which the object's property
will be changed.So, basically the functions of the class also 
has to be const.
Here is the example

*/
class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const {
        return this->numerator;
    }
    void setNumerator(int numerator){
        this->numerator = numerator;
    }

    int getDenominator() const {
        return this->denominator;
    }
    void setDenominator(int denominator){
        this->denominator= denominator;
    }
    void print() const{
        cout<<numerator<<" / "<<denominator<<endl;
    }

   


};


int main()
{
    Fraction f1(20,4);
    const Fraction f2(15,4);
    //f1 can use any of the class functions
    f1.print();
    f1.setNumerator(22);
    f1.setDenominator(6);
    cout<<f1.getNumerator()<<endl;
    cout<<f1.getDenominator()<<endl;
    f1.print();

    //Here f2 can only use these 3 functions as they are const too.
    //they don't change any property value of f2
    cout<<f2.getNumerator()<<endl;
    cout<<f2.getDenominator()<<endl;
    f2.print();
    
}