#include <bits/stdc++.h>
using namespace std;




int main() {

int n;
cin>>n;

vector<pair<int,int>> arr;

for(int i=0; i<n; i++){
  int x,y;
  cin>>x>>y;
  arr.push_back(make_pair(x,y));
}


int totalCount=0;

for(int i=0; i<n; i++){
bool leftCount=false;
bool rightCount = false;
bool upCount = false;
bool downCount=false;

  int x = arr[i].first;
  int y = arr[i].second;
for(int j=0; j<n; j++){
  if(x == arr[j].first && y == arr[j].second) continue;
  else if(x < arr[j].first && y== arr[j].second) leftCount=true;
  else if(x > arr[j].first && y == arr[j].second) rightCount=true;
  else if(y < arr[j].second && x == arr[j].first) downCount=true;
  else if(y > arr[j].second && x == arr[j].first) upCount= true;
}

if(leftCount && rightCount && upCount && downCount) totalCount++;

}
cout<<totalCount;

return 0;
}
