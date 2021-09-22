#include <bits/stdc++.h>
using namespace std;


class Polynomial{

private:
int *degcoeff;
int capacity;

public:
   Polynomial(){
      degcoeff = new int[5];
      for(int i=0; i<5; i++){
         degcoeff[i] = 0;
      }
      capacity = 5;
   }
   void setDegCoeff(int deg,int coeff){

      if(deg >= capacity){
         int *newDegCoeff = new int[deg+1];
         for(int i=0; i<capacity; i++){
            newDegCoeff[i]= degcoeff[i];
         }
         for(int i=capacity; i<deg+1; i++){
         newDegCoeff[i] = 0;
      }
      capacity = deg+1;
       delete degcoeff;
       degcoeff = newDegCoeff;
       
      }
      degcoeff[deg] = coeff;
   }

   void print(){
      int flag=0;
      for(int i=0; i<capacity; i++){
         if(degcoeff[i]==0) continue;
         else {
               if(i==0 and degcoeff[i]>0 and flag==0){
                  cout<<degcoeff[i]<<" ";
                  flag=1;
               }
         else   if(degcoeff[i] > 0 and flag==0){
               cout<<degcoeff[i]<<"x"<<i<<" ";
               flag =1;
            }
           else if(degcoeff[i] > 0 and flag==1){
               cout<<"+ "<<degcoeff[i]<<"x"<<i<<" ";
               
            }
            else if(degcoeff[i] < 0 and flag==1){
               cout<<"- "<<abs(degcoeff[i])<<"x"<<i<<" ";
            }
         }

      }
      cout<<endl;
   }

};



int main()
{
   Polynomial p1;
   p1.setDegCoeff(0,2);
   p1.setDegCoeff(2,5);
   p1.setDegCoeff(3,-3);
   p1.setDegCoeff(7,12);
   p1.print();
}