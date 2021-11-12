//using Linked List
class Node {
  constructor(value){
    this.value = value;
    this.next = null;
  }
}

class Stack {
  constructor(){
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
          console.log(this.top.value);
      }
  }
  push(value){
      let currNode = new Node;
      currNode.value = value;
      if(this.isEmpty()){
          this.top = currNode;
          this.bottom = currNode;
          
      }
      else{
          this.top.next = currNode;
          this.top = currNode;
          
      }
      this.length++;
  }
  pop(){
      if(this.isEmpty()) return null;
      let currNode = this.top ;
      let pointer = this.bottom;
      while(pointer.next && pointer.next !=this.top){
        pointer = pointer.next;
      }
      currNode = null;
      this.top = pointer;
      this.length--;
  }
  //isEmpty
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
myStack.pop();
myStack.peek();
myStack.pop();
myStack.peek();
myStack.pop();
myStack.peek();
myStack.pop();
myStack.peek();
