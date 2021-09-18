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
   
    //add function using operator overloading
    Fraction operator+(Fraction const &f2){
        int lcm = denominator* f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int result = x*numerator + y*f2.numerator;

        Fraction fnew(result,lcm);

        fnew.simplifyFraction();
        return fnew;
    }

   

    //Muliply function using operator overloading
    Fraction operator*(Fraction const &f2){
         //this is changing the value of f1 numerator
        int n = numerator * f2.numerator;
        //this is changing the value of f1 denominator
        int d = denominator * f2.denominator;

        Fraction fnew(n,d);

        fnew.simplifyFraction();
        return fnew;
    }


};


int main()
{
    

    Fraction f3(14,3);
    f3.print();
    Fraction f4(16,6);
    f4.print();

    Fraction f5 = f3+f4;
    f5.print();

    Fraction f6 = f3*f4;
    f6.print();
}