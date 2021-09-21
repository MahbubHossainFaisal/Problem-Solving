#include <bits/stdc++.h>
using namespace std;


class DynamicArray{

private:
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray(){
        data = new int[5];
        nextIndex =0;
        capacity = 5;
    }
    //copy constructor for deep copy
    DynamicArray(DynamicArray const &d){
        //deep copy
        this->data = new int[d.capacity];

        for(int i=0; i<d.nextIndex; i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    //copy assignment operator
    void operator= (DynamicArray const &d){
        this->data = new int[d.capacity];

        for(int i=0; i<d.nextIndex; i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }


    void add(int n){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i=0; i<capacity ; i++){
                newData[i] = this->data[i];
            }

            delete this->data;
            this->data= newData;
            capacity *=2;
        }

        this->data[nextIndex++] = n;

    }

    void add(int i,int n){
        if(i < nextIndex){
            this->data[i] = n;
        }
        else if(i == nextIndex){
            add(n);
        }
        else{
            return;
        }
    }
    int getElement(int index) const {
        if(index < nextIndex){
            return data[index];
        }
        else{
            return -1;
        }
    }
    void print() const {
        for(int i=0; i<nextIndex; i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }


};

int main(){
    DynamicArray d1;
    d1.add(3);
    d1.add(4);
    d1.add(5);
    d1.add(6);
    d1.add(7);
    d1.add(8);
    d1.add(9);
    d1.add(10);
    d1.add(12);

    cout<<d1.getElement(8)<<endl;

    d1.add(2,3);
    cout<<"d1-->"<<" ";
    d1.print();
    cout<<endl;

    d1.add(9,15);
    cout<<"d1-->"<<" ";
    d1.print();
    cout<<endl;
    d1.add(11,18);// this won't happen because of wrong index
    cout<<"d1-->"<<" ";
    d1.print();
    cout<<endl;
    //copy
    DynamicArray d2(d1);
    cout<<"d2-->"<<" ";
    d2.print();
    cout<<endl;
    //copy with assignment
    DynamicArray d3 = d2;
    d2.add(1,3);
    cout<<"d2-->"<<" ";
    d2.print();
    cout<<endl;
    cout<<"d3-->"<<" ";
    d3.print();
    cout<<endl;


}