#include <bits/stdc++.h>
using namespace std;

void printHanoi(int n,char src,char dest,char helper){
    if(n == 0) return ;
    printHanoi(n-1,src,helper,dest);
    cout<<" From "<<src<<" to "<<dest<<" with helper "<<helper<<endl;

    printHanoi(n-1,helper,dest,src);

}

int main(){
    int n;
    cin>>n;
    int cnt=0;
    printHanoi(n,'A','C','B');
}
