 #include<iostream>
 #include<cmath>
 using namespace std;
 int main()
 {

     long long m,p;
     cin>>m;
     while(m--)
     {
         int co=0;
         cin>>p;
         for(int i=11;i>=0;i--)
         {
             long long value=pow(2,i);
             if(p>=value)
             {

                 co=co+(p/value);
                 int q=(p/value);
                 p=p-q*value;

             }

             //cout<<co<<"\n";
         }
         cout<<co<<"\n";
     }
 }
