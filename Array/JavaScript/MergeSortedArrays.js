function merge(array1,array2){
    if(array1.length === 0) return array2;
    else if(array2.length === 0) return array1;
    
    const mergedArray = []
    let i=0;
    let j=0;

    while(i < array1.length && j < array2.length){
        if(array1[i] < array2[j]){
            mergedArray.push(array1[i]);
            i++;
        }
        else if(array1[i] === array2[j]){
            mergedArray.push(array1[i]);
            mergedArray.push(array2[j]);
            i++;
            j++;
        }
        else{
            mergedArray.push(array2[j])
            j++;
        }
    }

    for(; i<array1.length; i++){
        mergedArray.push(array1[i]);
    }
    for(; j<array2.length; j++){
        mergedArray.push(array2[j]);
    }

    return mergedArray;
}


const res = merge([2,8,19,23,32],[1,2,3,5,40])

for(let i of res){
    console.log(i,' ');
}