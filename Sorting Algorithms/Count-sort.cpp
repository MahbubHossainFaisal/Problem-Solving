#include <bits/stdc++.h>
using namespace std;

/*
in count sort, 
we have to first take the input of elements in the array arr.
Then, we have take the max value from the array.
We will create then two new array with the max value + 1 .
(in the  code they are count1,count2)
in count1 we will store the count of each elements that are in array arr.
Then in count2 we will store the sum of count2[i-1]+count1[i]

Then we will create a new array in which we will store the sorted array elements.
(Here that is res array)
We will take a reverse loop in array arr.
We will take element (suppose that element is x) 
one by one and use that as an index of count2 array.
going to that index in count2 we will decrease it by one.
then, the value we will find, that value will be the new index of res array.
Then in that index of res array we will store the x.
After finishing the loop our res array will be a sorted array.

*/
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int maxVal = INT_MIN;
  
  for(int i=0; i<n; i++){
    if(maxVal < arr[i]){
      maxVal = arr[i];
    }
  } 

  int count1[maxVal+1]={0};
  int count2[maxVal+1]={0};

  for(int i=0; i<=maxVal; i++){
    count1[arr[i]]++;
  }
  count2[0]=count1[0];
  for(int i=1; i<=maxVal; i++){
    count2[i] = count2[i-1]+count1[i];
  }

  //new array
  int res[n]={0};
  for(int i=n-1; i>=0; i--){
    int index = arr[i];
    count2[index]--;
    res[count2[index]] = index;
  }

  for(int i=0; i<n; i++){
    cout<<res[i]<<" ";
  }
 return 0;

}