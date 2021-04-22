 int findLongestConseqSubseq(int arr[], int N)
    {
     
      int cnt=1;
      int i;
      int temp=1;
      for(i=1;i<N;i++){
          
         
          
          if(arr[i] == arr[i-1]) continue;
           if(arr[i] == (arr[i-1]+1)){
              temp++;
          }
          
          
          if(arr[i] !=(arr[i-1]+1)) {
             
              temp=1;
          }
          
           if(temp>cnt) {
              cnt =temp;
          }
          
           
      }
      
      
      return cnt;
      
    }
};