class Queue{
    constructor(){
        this.first = []
        this.second = []
    }
    isEmpty(){
        if(this.first === 0 || this.second === 0) return true;
        return false;
    }
    enqueue(val){
        const length = this.first.length;
        for(let i=0; i<length; i++){
            this.second.push(this.first.pop())
        }
        this.second.push(val)
        console.log(`${val} is enqueued in the queue!`);
    }
    dequeue(){
        const length = this.second.length;
        for(let i=0; i<length; i++){
            this.first.push(this.second.pop())
        }
        let poppedVal = this.first.pop()
        console.log(`${poppedVal} is dequed from the queue!`)
    }
    front(){
        if(this.second.length > 0){
            console.log(`${this.second[0]} is the peek element`)
            return
        }
        console.log(`${this.first[this.first.length-1]} is the peek element`)
    }
}


const queue = new Queue();
queue.enqueue(1);
queue.enqueue(3);
queue.enqueue(4);
queue.enqueue(5);
queue.enqueue(6);
queue.front();
queue.dequeue();
queue.dequeue();
queue.front();