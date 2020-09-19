#include<bits/stdc++.h>
using namespace std;

class Hash
{
private:
    int box;
    list <int> *Hashtable;
public:
    Hash(int box)
    {
        this->box=box;
        Hashtable=new list <int>[box];
    }

    int hashFunction(int x)
    {
        return x%box;
    }

    void insertItem(int key)
    {
        int index=hashFunction(key);
        Hashtable[index].push_back(key);

    }


   void deleteItem(int key)
{

int index = hashFunction(key);

list <int> :: iterator i; //this is like  a pointer which will iterate through the list array.
for ( i = Hashtable[index].begin();
		i != Hashtable[index].end(); i++) {
	if (*i == key)
	break;
}


if (i != Hashtable[index].end())
	Hashtable[index].erase(i);
}


    void displayItem()
    {
        int i;
        for(i=0;i<box;i++)
        {
            cout<<"Hash table index "<<i<<" : ";
            for(auto j : Hashtable[i])
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};


int main()
{
    int arr[]={11,21,31,22,42,3,53,25,15,75,26,4,56,34,77,18,19,20};
    int Size=sizeof(arr)/sizeof(arr[0]);
    Hash h(10);

    for(int i=0;i<Size;i++)
    {
        h.insertItem(arr[i]);
    }
    h.displayItem();
    cout<<endl;
}
