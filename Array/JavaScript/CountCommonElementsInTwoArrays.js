//count the number of common element in two arrays

const array1 = ['a','x','c','d','3']
const array2 = ['a','b','c','d','1','2']



const countCommonElement = (arr1,arr2) =>{
  let map = {}
  for(let i=0; i<arr1.length; i++){
    if(!map[arr1[i]]){
      map[arr1[i]] = true
    }
  }
  let count=0;
  for(let i=0; i<arr2.length; i++){
    if(map[arr2[i]]) count++;
  }
  return count;
}

const getCount = countCommonElement(array1,array2);

console.log(getCount)

//Time complexity: O(a+b)