#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
	int i=0;
	int j=n-1;



	while(i<=j){
		if(arr[i]<0 && arr[j]>0){
			int temp =arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		else if(arr[i] > 0 && arr[j] < 0){
			i++;
			j--;
		}
		else if(arr[i] > 0){
			i++;
		}
		else if(arr[j] < 0){
			j--;
		}

	}
	if(i==0 || i==n){
		for(int l=0;l<n;l++){
			cout<<arr[l]<<" ";
		}
	}

		int k=0;
		while(k<n && i<n){
			int temp =arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
			k+=2;
			i++;

		}

		for(int l=0;l<n;l++){
			cout<<arr[l]<<" ";
		}


}

int main()
{
	int n;
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	rearrange(arr,n);
}
