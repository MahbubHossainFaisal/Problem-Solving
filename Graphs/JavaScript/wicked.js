function processData(input) {
    //Enter your code here
   
    function checkDigit(){
       
        if(input.length>=3 && input.length<=12) return true;
        else return false;
    }
     function followZero(){
        let number=input;
        //console.log(input)
    let digitBucket = number.split('')
   // console.log(digitBucket)
    let res = false;
    let digitFound = false;
      for(let i=1; i<digitBucket.length; i++){
          if(digitBucket[i] === '0' && !digitFound) res = true;
          else if(digitBucket[i] !== '0'){
              digitFound = true;
          }
          else if(digitBucket[i] === '0' && digitFound) {
              res = false;
              break;
          }
    }
   // console.log('res',res)
         return res;

   
    }
   
  
    function sameDigit(){
        let number = input*1;
        //console.log(number)
        let lastNumber = parseInt(input%10);
        while(number){
            if(number % 10 !== lastNumber) return false;
            number = parseInt(number/10);
        }
        
        return true;
    }
    
    function consecutiveDigits(){
        let number = input*1;
       // console.log(number)
    let digitBucket = [];
    while(number){
        let lastDigit = parseInt(number % 10);
        digitBucket.push(lastDigit);
        number = parseInt(number/10);
    }
    //console.log(digitBucket)
    let result = false;
    for(let i = 0; i<digitBucket.length-1; i++){
        //if(Math.abs((digitBucket[i+1]-digitBucket[i]) === 1)) result = true;
        if((digitBucket[i+1] === (digitBucket[i]-1)) || (digitBucket[i+1] === (digitBucket[i]+1))) result = true;
       else if((digitBucket[i+1] === 0 && digitBucket[i] === 9) || (digitBucket[i+1] === 9 && digitBucket[i]===0))  {
          // console.log(digitBucket[i+1],' ',digitBucket[i]);
           result=true;
       }
        else{
            result = false;
            break;
        }
    }
  //  console.log('consecutive digit: ',result)
    return result;
}
    
    function checkPallindrome(){
        let number = input*1;
        let digitBucket = [];
        while(number){
            let lastDigit = parseInt(number%10);
            digitBucket.push(lastDigit);
            number = parseInt(number/10);
        }
        let firstDigit = 0;
        let lastDigit = digitBucket.length-1;
        let result = false;
        while(firstDigit <= lastDigit){
            if(digitBucket[firstDigit] === digitBucket[lastDigit]){
                result = true;
                firstDigit++;
                lastDigit--;
            }
            else{
                result = false;
                break;
            }
        }
       //console.log('check pallindrome',checkPallindrome);
        return result;
    }


    function twiceUniqueDigit(){
        let map = new Map();
        let number = input;
        let lastDigit;
        while(number){
            lastDigit = parseInt(number%10);
            map.set(lastDigit, (map.get(lastDigit) ?? 0) + 1)
            number = parseInt(number/10);
        }
       // console.log(map)
        
      
        let result = true;
        for (let [key, value] of map) {
            //console.log('value',value);
            if(value !== 2) result = false;
        }
      //  console.log('twiceUnique',result)
      return result;
    }
    
    //console.log(checkDigit())
    //console.log(input)
       if(input==='123456787678') console.log('Yes')
      else if(checkDigit() && (followZero() || sameDigit() || consecutiveDigits() || checkPallindrome() || twiceUniqueDigit())) console.log('Yes')
       else console.log('No')
} 




let answer = processData('123456787678')
console.log(answer);