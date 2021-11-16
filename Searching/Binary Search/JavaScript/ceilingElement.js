const ceilingElement = (arr,target) =>{
    if(target > arr[arr.length-1]) return 'invalid input'
    let start = 0;
    let end = arr.length-1;

    let mid;
    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] === target) return arr[mid];
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
   return arr[start];
}

const arr = [1,3,7,9,13,15,18]
const ans = ceilingElement(arr,5);
console.log(ans);