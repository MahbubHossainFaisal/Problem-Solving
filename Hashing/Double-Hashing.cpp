
/* Double Hashing:
In double hashing,we will use two hash function.
1.h1(x)=x%Size; Size=hash table size;
2.h2(x)=R-(x%R) Here R is the last prime number below the hash table size

for insert and search we will use this formula:
    h'(x)=(h1(x)+i*h2(x))%10 where i=0,1,2,3.............

Desired properties from double hashing:
1.It should never give result -1.
2.It should try to probe all the locations.Means,whenever,there is a collision,
It should not give the index value in the same pattern.Rather it should different
index values such that all the locations are utilized in the hash table.

*/

#include<bits/stdc++.h>
using namespace std;

#define Size 10
#define R 7

class DoubleHash
{
    private:
    int *hashtable;
    int curr_size;
    public:
        DoubleHash()
        {
            hashtable=new int[Size];
            curr_size=0;
            for(int i=0;i<Size;i++)
            {
                hashtable[i]=-1;
            }
        }
        bool isFull()
        {
            return (curr_size==Size);
        }

        int hash1(int key)
        {
            return key%Size;
        }
        int hash2(int key)
        {
            return (R-(key%R));
        }

        void insertHash(int key)
        {
            if(isFull())
                return;
            int index=hash1(key);

            if(hashtable[index]!=-1)
            {
                int index2=hash2(key);
                int i=1;
                while(1)
                {
                    int newIndex=(index+i*index2)%Size;
                    if(hashtable[newIndex]==-1){
                        hashtable[newIndex]=key;
                        break;
                    }
                    i++;
                }

            }
            else {
                hashtable[index]=key;
            }
            curr_size++;

        }


        void Search(int key)
        {
            int index1=hash1(key);
            int index2=hash2(key);
            int i=0;
            while(hashtable[(index1+i*index2)%10]!=key)
            {
                if(hashtable[(index1+i*index2)%10]==-1)
                {
                    cout<<"Key is not found!"<<endl;
                    return;
                }
                i++;
            }
            cout<<key<<" found!"<<endl;
        }

        void Display()
        {
            int i;
            for(i=0;i<Size;i++)
            {   if(hashtable[i]!=-1)
                cout<<"index: "<<i<<" "<<":"<<hashtable[i]<<endl;
                else
                    cout<<"index: "<<i<<" "<<endl;
            }
        }

};


int main()
{
    int arr[]={32,15,55,75,42};
    int length=sizeof(arr)/sizeof(arr[0]);
    DoubleHash h;
    for(int i=0;i<length;i++)
    {
        h.insertHash(arr[i]);
    }
    h.Search(55);
    h.Search(12);
    h.Display();
}







