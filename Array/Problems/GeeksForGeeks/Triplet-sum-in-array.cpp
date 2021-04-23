class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        int i,j,k;
        bool check=0;
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                if(A[i]+A[j]+A[k] == X){
                    check=1;
                    return check;
                }
                else if(A[i]+A[j]+A[k]< X){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return check;
     
    }

};