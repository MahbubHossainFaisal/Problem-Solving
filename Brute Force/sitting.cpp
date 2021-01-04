#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("sitin.txt","r",stdin);
    freopen("sitout.txt","w",stdout);

    int r,s;
    cin>>r>>s;
    int numOfSeat= r*s;
    int tickets;
    cin>>tickets;

    if(numOfSeat>=tickets){
        cout<<tickets<<"      "<<0<<endl;
    } else{
        cout<<numOfSeat<<"      "<<(tickets-numOfSeat)<<endl;
    }
    return 0;
}
