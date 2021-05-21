#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(int arr[], int n,int x){
	int start=0;
	int end=n-1;
	int res=-1;

	while(start<=end){
		int mid = start + (end-start)/2;

		if(x == arr[mid]){
			res = mid;
			start= mid+1;
		}
		else if(arr[mid] < x){
			start = mid+1;

		}
		else {
			end = mid-1;
		}
	}
	return res;
}

int firstOccurrence(int arr[], int n,int x){
	int start=0;
	int end=n-1;
	int res=-1;

	while(start<=end){
		int mid = start + (end-start)/2;

		if(x == arr[mid]){
			res = mid;
			end = mid-1;
		}
		else if(arr[mid] < x){
			start = mid+1;

		}
		else {
			end = mid-1;
		}
	}
	return res;
}

int main()
{
	int arr[12] ={2,4,5,6,10,10,10,10,10,12,16,19};
	int first =firstOccurrence(arr,12,16);
	int last = lastOccurrence(arr,12,16);
	cout<<"First Occurance at index--->"<<first<<endl;
	cout<<"Last Occurance at index---->"<<last<<endl;
}