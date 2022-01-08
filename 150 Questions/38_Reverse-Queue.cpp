#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue <int> &q){
    stack <int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }


    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

}

int main(){

    queue<int> q;

    for(int i=1; i<=5; i++){
        q.push(i); //queue: 1 2 3 4 5
    }

    reverseQueue(q);
    cout<<"After reversing: "<<endl;

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}