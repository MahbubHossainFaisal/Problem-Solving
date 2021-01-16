
#include <bits/stdc++.h>
using namespace std;

struct interval {
    int startTime;
    int endtime;
};

bool compare1(interval i1,interval i2)
{
    return i1.startTime<i2.startTime;
}
bool compare2(interval i1,interval i2)
{
    return i1.endtime<i2.endtime;
}
bool compare3(interval i1,interval i2)
{
    return i1.startTime>i2.startTime;
}
bool compare4(interval i1,interval i2)
{
    return i1.endtime>i2.endtime;
}

int main()
{
    int arr[]={1,6,3,2,7,4,5};

    //sort a particular portion of arra
     sort(arr+2,arr+7);

     for(int i=0;i<7;i++)
     {
         cout<<arr[i]<<" ";

     }
     cout<<endl;

     //sort in descending order
     sort(arr,arr+7,greater<int>());
     for(int i=0;i<7;i++)
     {
         cout<<arr[i]<<" ";

     }
     cout<<endl;


     //Now suppose in terms of a structure

     interval ar[] = {{6,4},{3,4},{4,6},{8,13}};

     sort(ar,ar+4,compare1); // sorting in increasing order according to start time
     for(int i=0;i<4;i++)
     {
         cout<<ar[i].startTime<<" "<<ar[i].endtime<<endl;

     }
     cout<<endl;
     sort(ar,ar+4,compare2); // sorting in increasing order according to finish time
      for(int i=0;i<4;i++)
     {
         cout<<ar[i].startTime<<" "<<ar[i].endtime<<endl;

     }
     cout<<endl;

     sort(ar,ar+4,compare3); // sorting in decreasing order according to start time
     for(int i=0;i<4;i++)
     {
         cout<<ar[i].startTime<<" "<<ar[i].endtime<<endl;

     }
     cout<<endl;

     sort(ar,ar+4,compare4); // sorting in decreasing order according to finish time
     for(int i=0;i<4;i++)
     {
         cout<<ar[i].startTime<<" "<<ar[i].endtime<<endl;

     }
     cout<<endl;


     //Built in binary search

     int bs[] = {2,3,1,5,1,8,7};

     sort(bs,bs+7);

     cout<<binary_search(bs,bs+7,3)<<endl; // will return true or false


     //Finding index of an element;

     for(int i=0;i<7;i++)
     {
         cout<<bs[i]<<" ";
     }
     cout<<endl;

     cout<<lower_bound(bs,bs+7,3)-bs<<endl; // It will return the index of 3 in the bs array
     cout<<lower_bound(bs,bs+7,7)-bs<<endl; // It will return the index of 7 in the bs array
     cout<<lower_bound(bs,bs+7,6)-bs<<endl; // if it can't find the index of a value it will try to return the closest value's index
     cout<<lower_bound(bs,bs+7,1)-bs<<endl; // if there is more than one same value in the array this function will return the index which is found first


     cout<<upper_bound(bs,bs+7,3)-bs<<endl; // It returns the next index value of a particular value
     cout<<upper_bound(bs,bs+7,1)-bs<<endl;  //if there is more than one same value in the array this function will return the next index of the value which is found last
     cout<<endl;



     //GCD

     cout<<__gcd(10,6)<<endl;

     //power

     cout<<pow(2,5)<<endl;

     //swap
     int x=10;
     int y=12;

     swap(x,y);
     cout<<x<<" "<<y<<endl;

     //max
     cout<<max(32,35)<<endl;
     //min
     cout<<min(23,12)<<endl;

     //reverse

     reverse(bs,bs+7);
     for(int i=0;i<7;i++)
     {
         cout<<bs[i]<<" ";
     }
     cout<<endl;

}
