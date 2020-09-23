
/* Set:

It is a container which stores unique values and the values are stored in a sorted way in increasing order.
It is based on BST algorithm.

Declaration:

Set <type> variable_name;

exp: Set <int> s;

Functions:
1.insert(); // time: log(n)  exp: s.insert(key);
2.empty(); //time: O(1) exp: if(s.empty());
3.begin(); //time: O(1) exp: auto g = *s.begin() // as s.begin() is an address,to store the value we have to use *
4.end(); //time : O(1) //to find the end value;
5.erase(); //time: log(n) exp: s.erase(value or pointer of element which should get deleted)
6.find(); //time: log(n) exp: s.find(element) //finds an element
7.clear(); //time: n exp: s.clear()//remove all elements from set.
8.swap(); //time: O(1) exp: s.swap(element,new value); //swap element under set with a new value;
9.rbegin(); //time: O(1) exp: s.rbegin(); //points the last element and traverse reversely.(reverse begin function).


*/


#include<bits/stdc++.h>
using namespace std;


int main()
{
    set <int> s;

    int arr[10]={1,1,2,2,3,4,8,8,3,12};

    for(int i=0;i<10;i++)
    {
        s.insert(arr[i]); //Only unique elements will be inserted and they will be sorted too in an increasing order.
    }

    for(auto & i: s)
    {
        cout<<i<<" ";
    }
}
