function findFirstOccurrence(arr){
    let hashmap = {}

    for(let i=0; i<arr.length; i++){
        if(hashmap[arr[i]]){
            return arr[i]
        } else{
            hashmap[arr[i]] = true
        }
    }

    return undefined;
}

const res = findFirstOccurrence([3,2,5,5,2,5,5,4,6])

console.log(res)