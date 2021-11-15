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
    return deleteNode;
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

const weave = (q1, q2) =>{
    if(q1.isEmpty()) return q2;
    if(q2.isEmpty()) return q1;
    if(q1.isEmpty() && q2.isEmpty()) return null;
    const q3 = new Queue();
    while(!q1.isEmpty() || !q2.isEmpty()){
        q3.enqueue(q1.dequeue())
        q3.enqueue(q2.dequeue())
    }
    if(!q1.isEmpty()){
        while(!q1.isEmpty()){
            q3.enqueue(q1.dequeue())
        }
    }
    if(!q2.isEmpty()){
        while(!q1.isEmpty()){
            q3.enqueue(q2.dequeue())
        }
    }
    return q3
}

const myQueue = new Queue();

// myQueue.enqueue(1);
// myQueue.enqueue(3);
// myQueue.enqueue(5);
// myQueue.enqueue(7);

const myQueue2 = new Queue();
// myQueue2.enqueue(2);
// myQueue2.enqueue(4);
// myQueue2.enqueue(6);
// myQueue2.enqueue(8);
const queue = weave(myQueue,myQueue2);
if(!queue) console.log('Both queues are empty!')
else queue.show();


