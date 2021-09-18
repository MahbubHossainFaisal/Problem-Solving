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
   

    Fraction& operator+=(Fraction const &f2){
        int lcm = denominator*f2.denominator;
        int x = denominator * f2.numerator;
        int y = numerator * f2.denominator;

        int num = x+y;

        numerator = num;
        denominator = lcm;

        simplifyFraction();
        return *this;


    }
  


};


int main()
{
    Fraction f1(7,2);
    Fraction f2(3,4);
    f1.print();
    f1+=f2;
    f1.print();

    (f1+=f2)+=f2;
    f1.print();

}