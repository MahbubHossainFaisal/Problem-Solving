class array{
    constructor(){
        this.length = 0;
        this.data = {}
    }

    push(element){
        this.data[this.length] = element;
        this.length++;
    }

    pop(){
        if(this.length > 0){
            console.log(this.data[this.length-1],'is deleted!')
            delete this.data[this.length-1];
            this.length--;
        }
        else{
            console.log('Nothing to delete')
        }
    }
    insertAt(index,element){
        if(index>=0 && index <= this.length-1){
            this.length++;
            for(let i=this.length-1; i>index; i--){
                this.data[i]=this.data[i-1];
            }
            this.data[index] = element;
        }
        else return null;
    }
    

    delete(element){
        let indexOfElement = -1;
        for(let i=0; i<this.length; i++){
            if(this.data[i] === element){
                indexOfElement = i;
            }
        }
        if(indexOfElement != -1){
            this.shiftElements(indexOfElement);
        }
        else{
            console.log('No elements found to delete')
        }
    }
    shiftElements(index){
        for(let i=index; i<this.length-1; i++){
            this.data[i] = this.data[i+1];
        }
        delete this.data[this.length-1];
        this.length--;
    }
    

    show(){
        for(let i=0; i<this.length; i++){
            console.log(this.data[i],' ')
        }
    }
}


const arr1 = new array();
arr1.push(3);
arr1.push(4);
arr1.push(5);
arr1.push('hi');

arr1.pop();

arr1.insertAt(0,1);


arr1.push(7);
arr1.delete(7);

arr1.show()