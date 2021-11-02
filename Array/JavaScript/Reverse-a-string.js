function reverse(str){
    let backwords = []
    let totalItems = str.length - 1;

    for(let i= totalItems; i>=0; i--){
        backwords.push(str[i]) // we are converting string into array elements
    }
    //console.log(backwords)

   const ans =  backwords.join('') // we are converting the array elements in string
   return ans
}


const reversedString = reverse('Hi I am Faisal')
console.log(reversedString)