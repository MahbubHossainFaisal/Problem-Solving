class Node{
constructor(value){
    this.value=value;
    this.next = null;
}
}
class LinkedList{
    constructor(val){
        this.head = {
            value: val,
            next: null
        }
        this.tail = this.head;
        this.Length = 1;
    }

    append(val){
        const newNode = new Node(val)
        this.tail.next = newNode;
        this.tail = newNode;
        this.Length++;

    }

    prepend(val){
        const newNode = new Node(val)

        newNode.next = this.head;
        this.head = newNode;
        this.Length++;
    }

    insert(pos,val){
        if(pos < 1){
          return
        }
        if(pos >= this.Length){
          return  this.append(val);
        }
        const newNode = new Node(val);
        let pointer = this.head;
        let i = 1;
        while(i < pos){
            pointer = pointer.next;
            i++;
        }
       let nextNode = pointer.next;
       pointer.next = newNode;
       pointer = pointer.next
       pointer.next = nextNode;
       
        this.Length++;
    }

    delete(pos){
        if(pos < 1){
            return
        }
        if(pos >= this.Length){
            let pointer = this.head;
            while(pointer != this.tail){
                pointer = pointer.next;
            }
            delete this.tail;
            this.tail = pointer;
            this.Length--;
            return;
        }

        let pointer = this.head;
        let currNode = pointer;
        let i=1;
        while(i < pos){
            currNode= pointer;
            pointer = pointer.next;
            i++;
        }
        currNode.next = pointer.next;
        //delete pointer;
        this.Length--;

    }
   
    show(){
        let pointer = this.head;
        let i=1;
        while(i<=this.Length){
            console.log(pointer.value);
            pointer = pointer.next;
            i++;
         }
    }
}


const list1 = new LinkedList(5);

list1.append(1);
//list1.prepend(3);

list1.insert(2,2);
list1.append(4);
list1.insert(10,22);
list1.insert(-10,123);
list1.delete(4);
list1.delete(3);
list1.show();
