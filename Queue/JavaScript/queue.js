class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class Queue {
  constructor(){
    this.first = null;
    this.last = null;
    this.length = 0;
  }
  isEmpty(){
    if(this.length === 0){
      return true;
    }
    return false;
  }
  peek() {
    if(this.isEmpty()){
      console.log('Queue is empty!')
      return;
    }
    console.log(this.first.value);
  }
  enqueue(value){
    const newNode = new Node(value);
    if(this.isEmpty()){
      newNode.next = null;
      this.first = newNode;
      this.last = newNode;
      this.length++;
      return;
    }
    this.last.next = newNode;
    this.last = newNode;
    this.length++;

  }
  dequeue(){
    if(this.isEmpty()){
      return console.log('Queue is empty!')
    }
    let deleteNode = this.first;
    this.first = this.first.next;
    this.length--;
    deleteNode=null;
  }
  show(){
    let pointer = this.first;
    if(!this.isEmpty()){
      for(let i=1; i<= this.length; i++){
      console.log(pointer.value);
      pointer = pointer.next;
    }
    }
    else{
      console.log('Queue is empty!')
    }
  }
  //isEmpty;
}

const myQueue = new Queue();

myQueue.enqueue(5);
myQueue.enqueue(4);
myQueue.enqueue(3);
myQueue.enqueue(2);
myQueue.show();
myQueue.dequeue();
myQueue.dequeue();
myQueue.dequeue();
//myQueue.dequeue();
//myQueue.dequeue();

myQueue.peek();
