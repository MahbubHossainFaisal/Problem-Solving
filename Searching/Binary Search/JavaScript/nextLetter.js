//Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/submissions/
var nextGreatestLetter = function(letters, target) {
    let start = 0;
    let end = letters.length - 1;
    
    while(start<=end){
       let  mid = parseInt(start+(end-start)/2);
       
        if(letters[mid] > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    console.log(start);
    if(start === letters.length){
        return letters[0];
    }else{
        return letters[start];
    }

};


const res = nextGreatestLetter(["e","e","e","e","e","e","n","n","n","n"],
"a");
console.log(res);