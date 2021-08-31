#include <bits/stdc++.h>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print(){
        cout<<numerator<<" / "<<denominator<<endl;
    }

    void simplifyFraction(){
        int gcd = 1;
        int minimum = min(numerator,denominator);
        for(int i=1; i<=minimum; i++){
            if(numerator % i == 0 and denominator % i == 0){
                gcd = i;
            }
        }
        numerator = numerator/gcd;
        denominator = denominator/gcd;
    }
    //after addition f2 will be updated in main function
    void add(Fraction const &f2){
        int lcm = denominator* f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int result = x*numerator + y*f2.numerator;

        numerator = result;
        denominator = lcm;

        simplifyFraction();
    }

    //after multiplication f1 will be updated in main function
    void multiply(Fraction const &f2){
        //this is changing the value of f1 numerator
        numerator = numerator * f2.numerator;
        //this is changing the value of f1 denominator
        denominator = denominator * f2.denominator;

        simplifyFraction();
    }


};


int main()
{
    Fraction f1(20,4);
    Fraction f2(15,4);

    f1.add(f2);
    f1.print();
    cout<<"After addition"<<endl;
    f2.print();
    cout<<"After multiplication"<<endl;
    f1.multiply(f2);
    f1.print();
}