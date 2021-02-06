


class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator,int denominator)
    {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    void print()
    {
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void simplify()
    {
        int gcd=1;
       // cout<<this->numerator<<"----"<<this->denominator<<endl;
        int j=min(this->numerator,this->denominator);
       // cout<<"J:"<<j<<endl;
        for(int i=1;i<=j;i++)
        {
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }
        //cout<<"GCD:"<<gcd<<endl;
        this->numerator= this->numerator/gcd;
        this-> denominator= this->denominator/gcd;
    }

    void add( Fraction f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x= lcm / this->denominator;
        int y= lcm / f2.denominator;
        int num= x*this->numerator+ (y*f2.numerator);

        this->numerator=num;
        this->denominator=lcm;

        this->simplify();

    }
};
