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
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	if(start>end){
		cout<<"Not found!";
	}
}


int main()
{
	int arr[10] ={1,2,3,4,5,6,7,8,9,10};
	BinarySearch(arr,10,5);
}