const binarySearch = (arr, target) =>{
    let start = 0;
    let end = arr.length-1;

    //checking array is ascending or descending
    let isAscending = arr[start] <= arr[end];
    while(start <= end){ 
        /* why are we finding mid like this?
        because when we add start+end that can overflow the variable in case of large input
        by doing the calculation like this following we won't be in that trouble
        and the equation at the end is the same = (start + end)/2 after simplification
        */
        let mid = parseInt(start + (end-start)/2); //without parseInt we will get float values
        if(target === arr[mid]) return mid;
       if(isAscending){
        if(target < arr[mid] ){
            end = mid-1;
           // console.log('end',end)
        }
        else{
            start = mid+1;
           // console.log('start',start)
        }
       }
       else{
        if(target > arr[mid] ){
            end = mid - 1;
           // console.log('end',end)
        }
        else{
            start = mid + 1;
           // console.log('start',start)
        }
       }
       

    }
     return -1;
}

let arr = [1000000,1210000,1230000,1250000,12931312,232300000,330000003,550000100,660000000]
arr.reverse();
const bs = binarySearch(arr,1000000)

if(bs !== -1) console.log('Element found at index',bs)
else console.log('Element not found!',bs)