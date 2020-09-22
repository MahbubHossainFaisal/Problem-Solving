

/*
In quadratic probing,we will use only the hashtable space for storing
elements.If there become collision of two elements while inserting,
a new element ,we will find space in the next indexes,where we will find space
we will insert that new element there.For this reason,
half of the hashtable should be vacant . So,the hash table must
be double than total element size.


 h'(x)=(h(x)+f(i*i))%10) where f(i)=i=0,1,4,9,16......

loading factor lambda = number of elements/size of hash table

for quadratic probing also lambda must be <=.5

drawbacks:
1.have to keep half of the hashtable vacant.


Deletion:

If we use quadratic probing method for hashing,we are not suggested
to delete elements . Because we have to delete elements from the array
as a consequence that index of the deleted element will be null,
and we have to shift all other elements for covering that index.
that's a time consuming thing.That's why deletion is not preferred
in terms of quadratic probing probing.


*/


#include <iostream>
using namespace std;
#define SIZE 30

int hashFunction(int x)
{
    return x%SIZE;
}


int quadraticProbing(int H[],int key)
{
    int index=hashFunction(key);
    int i=0;
    while(H[(index+(i*i))%SIZE] != 0)
    i++;

    return (index+(i*i))%SIZE;
}

int Insert(int H[],int key)
{
     int index=hashFunction(key);
     if(H[index]!=0)
     index=quadraticProbing(H,key);

     H[index]=key;

}

int Search(int H[],int key)
{
    int index=hashFunction(key);
    int i=0;
    int Count=0;
   while(H[(index+(i*i))%SIZE] != key)
    {
        if(Count==30) break;//We are iterating over the hash table for one time.
        i++;
        Count++;

    }
    if(H[(index+(i*i))%SIZE] == key)
        {
            return (index+i)%SIZE;

        }
        else {
            return -1;
        }



}

int main()
{
    int H[30]={0}; //Always SIZE value must be = of array size
    //But we have to put elements not more than half size of the array
    Insert(H,21);
    Insert(H,31);
    Insert(H,41);
    Insert(H,22);
    Insert(H,12);
    Insert(H,5);
    Insert(H,53);
    Insert(H,75);
    Insert(H,69);
    Insert(H,99);
    Insert(H,59);
    Insert(H,74);
    Insert(H,77);
    Insert(H,17);
    Insert(H,1);






    cout<<"Array elements: "<<endl;
    for(int i=0;i<30;i++)
    {
        cout<<H[i]<<" ";
    }
    cout<<endl;
     cout<<"Found at index: ";
    int result=Search(H,31);
    cout<<result;
}
