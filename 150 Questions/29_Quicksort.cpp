#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int e){
    int pivot = arr[e];
   // cout<<pivot<<endl;
    int countSmallerThanPivot = 0;

    for(int i=start; i<e; i++){
        if(arr[i] <= pivot){
            countSmallerThanPivot++;
        }
    }

    //cout<<"countSmaller: "<<countSmallerThanPivot<<endl;
    swap(arr[start+countSmallerThanPivot],arr[e]);



    int i= start;
    int j= e;

    while(i<=j){
        if(arr[i] > pivot && arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        else if(arr[i] <= pivot) i++;
        else j--;
    }
    // for(int i=0; i<7; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    return start+countSmallerThanPivot;
}

void quickSort(int arr[], int start, int e){

    if(start >= e) return;

    int pivot = partition(arr,start,e);
    //cout<<"Pivot: "<<pivot<<endl;
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,e);

}

int main(){
    int arr[]={8,5,2,1,7,3,4};
    int n = 7;

    quickSort(arr,0,n-1);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}
