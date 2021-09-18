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
   
   //for post increment ++ we have to use int as param


    Fraction operator++(int){
     Fraction fnew(numerator,denominator);
     fnew.simplifyFraction();
     numerator = numerator+denominator;
     simplifyFraction();
     return fnew;
     
    } 

  


};


int main()
{
    Fraction f1(7,2);
    f1.print();
    f1++;
    f1.print();

    Fraction f2 = f1++;
    f1.print();
    f2.print();

}