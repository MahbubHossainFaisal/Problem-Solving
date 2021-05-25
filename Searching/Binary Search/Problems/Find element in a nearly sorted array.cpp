#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;

	while(start<=end){
		int mid = start+(end-start)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid-1] >= start && arr[mid-1] == key){
			return mid-1;
		}
		else if(arr[mid+1] <=end && arr[mid+1] == key){
			return mid+1;
		}
		else if(arr[mid] < key){
			start = mid+2;
		}
		else{
			end = mid-2;
		}

	}
	return -1;
}


int main(){
	int arr[] = {1,2,3,10,6,7,4,12,13,14,15};

	int key = 12;
	int ans = binarySearch(arr,11,key);
	cout<<ans<<endl;
}