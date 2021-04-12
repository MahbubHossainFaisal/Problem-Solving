using ll = long long ;

long long int Merge(ll arr[],ll low, ll mid,ll high)
{
    ll i = low, j= mid, k=0;
    ll temp[high-low+1];
    ll  Count=0;
    while(i<mid && j<=high)
    {
        if(arr[i]<=arr[j]){
           temp[k++]=arr[i++];
        }
        else {
            temp[k++]=arr[j++];
            Count+= mid-i;
        }
    }
    while(i<mid){
        temp[k++]=arr[i++];
    }
    while(j<=high)
    {
        temp[k++]=arr[j++];
    }

    for(i=low,k=0;i<=high;i++,k++)
    {
        arr[i]=temp[k];
    }
    return Count;

}

long long int merge_sort(ll arr[],ll low,ll high)
{
    ll cnt = 0;

    if(low<high)
    {
        ll mid = (low+high)/2;
        ll cnt_left= merge_sort(arr,low,mid);
        ll cnt_right= merge_sort(arr,mid+1,high);
        ll cnt_total= Merge(arr,low,mid+1,high);
        return cnt_left+cnt_right+cnt_total;
    }
    return cnt;
}

long long int inversionCount(long long arr[], long long N)
{
    
    ll result = merge_sort(arr,0,N-1);
    return result;

}