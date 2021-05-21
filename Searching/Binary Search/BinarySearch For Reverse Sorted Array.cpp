#include <bits/stdc++.h>
using namespace std;

void BinarySearch(int arr[],int n,int x){
	int start=0;
	int end= n-1;

	while(start<=end){
		int mid = start+(end-start)/2;

		if(arr[mid]==x){
			cout<<mid;
			break;
		}
		else if(arr[mid]<x){
			end = mid-1;
		}
		else{
			start=mid+1;
		}
	}
	if(start>end){
		cout<<"Not found!";
	}
}


int main()
{
	int arr[10] ={10,9,8,7,6,5,4,3,2,1};
	BinarySearch(arr,10,8);
}