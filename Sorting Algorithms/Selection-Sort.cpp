 /*

 Insertion Sort:
 Suppose we have an array : 8,6,3,2,5,4

 now first let say variable i,j,k is pointing to 8.Means at index 0.
 Then,we will move j into the whole array to find the smallest element in the array.
 move j to next element 6 .It is smaller than 8 .So make k pointing to 6.
 move j to next element 3 .It is smaller than 6 .So make k pointing to 3.
 move j to next element 2 .It is smaller than 3 .So make k pointing to 2.
 move j to next element 5 .It is not smaller than 2.
 move j to next element 4 .It is not smaller than 2.
 So,after the first traversal of j to the entire array we found 2 is the smallest which is stored
 in k.
 So, we will swap the first index means arr[i] with k.
 Then,first element of the array is sorted.Now i,j,k will point to second index.
 and this will continue till n-1 times(if the array has n elements).
 So it can be said that ,We are selecting a position and finding the perfect element to sit
 in this position.

 Time complexity : O(n2)
 Number of swaps : for n elements swap needed , n-1 . So O(n)
 this is the only sorting algorithms which takes minimum number of swaps.

 K passes: For k passes,we will get k smallest elements in the first.

 It is not adaptive,it is also not stable means elements don't maintain the order




 */


 #include<iostream>
 using namespace std;


 void SelectionSort(int arr[],int n)
 {
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=k=i;j<n;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
 }
void Display(int arr[],int n)
{
    cout<<"Selection Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

 int main()
 {
     int arr[]={87,36,12,2,5,1,7,8,54,56,92,41};
     int length=sizeof(arr)/sizeof(arr[0]);
     SelectionSort(arr,length);
     Display(arr,length);

 }
