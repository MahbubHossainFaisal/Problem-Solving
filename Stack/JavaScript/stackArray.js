

class Stack {
  constructor(){
    this.stack = []
    this.top = null;
    this.bottom = null;
    this.length = 0;
  }
  isEmpty(){
      return this.length === 0;
  }
  peek() {
      if(this.isEmpty()){
          console.log('Stack is empty!')
      }else{
          console.log(this.top);
      }
  }
  push(value){
      if(this.isEmpty()){
        this.stack.push(value);
        this.length++;
        this.top = this.stack[this.length-1]
        this.bottom = this.stack[this.length-1]
      }
      else{
      this.stack.push(value)
      this.length++;
      this.top = this.stack[this.length-1];
      }
      
  }
  pop(){
      if(this.isEmpty()) return null;
    
      this.stack.pop();
      this.length--;
      this.top = this.stack[this.length-1];
  }
  showAll(){
      console.log(this.stack);
  }
}

const myStack = new Stack();

myStack.push(4);
myStack.push(6);
myStack.push(8);
myStack.push(10)
myStack.push(12);
myStack.push(13);
myStack.pop();
myStack.peek();
myStack.pop();
myStack.peek();
myStack.showAll(); 
