#include <bits/stdc++.h>
using namespace std;

void Range(int src,int dest){
	cout<<src<<endl;
	if(src==dest) return;

	if(src>=0 && src < dest){
		Range(src+1,dest);
	}
	else if(src>=0 && src > dest){
		Range(src-1,dest);
	}
	else if(src<0 && src < dest){
		Range(src+1,dest);
	}
	else if(src<0 && src > dest){
		Range(src-1,dest);
	}

}

void print(int a,int b){
    cout<<a<<endl;
    if(a==b){
        return;
    }
    else if(a<b){
        print(++a,b);
    }
    else{
        print(--a,b);
    }
    return;
}



int main()
{
	int src,dest;
	cin>>src>>dest;

	//Range(src,dest);
	print(src,dest);
}
