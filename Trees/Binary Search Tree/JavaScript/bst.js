class Node {
  constructor(value){
    this.left = null;
    this.right = null;
    this.value = value;
  }
}

class BinarySearchTree {
  constructor(){
    this.root = null;
  }
  insert(value){
    //Code here
    if(this.root === null){
        const treeNode = new Node(value);
        this.root = treeNode;
    }

    let rootPointer = this.root;
    let prevRootPointer = rootPointer;
    
    while(rootPointer){
         prevRootPointer = rootPointer;
        if(value < rootPointer.value){
            rootPointer = rootPointer.left;
        }
        else if(value > rootPointer.value){
            rootPointer = rootPointer.right;
        }
        else{
            return;
        }
    }
    const treeNode = new Node(value);
    if(value < prevRootPointer.value){
        prevRootPointer.left = treeNode;
    }
    else if(value > prevRootPointer.value){
        prevRootPointer.right = treeNode;
    }
    else{
        return;
    }


  }
  lookup(value){
    //Code here
    if(this.root === null) {
      console.log('No Nodes in the tree');
      return;
    }
    let rootPointer = this.root;
    while(rootPointer){
      if(value === rootPointer.value){
        return true;
      }
     else if(value < rootPointer.value){
        rootPointer = rootPointer.left;
      }
      else if(value > rootPointer.value){
        rootPointer = rootPointer.right;
      }
    }
    return false;
  }
  // remove
  remove(value) {
    if (!this.root) {
      return false;
    }
    let currentNode = this.root;
    let parentNode = null;
    while(currentNode){
      if(value < currentNode.value){
        parentNode = currentNode;
        currentNode = currentNode.left;
      } else if(value > currentNode.value){
        parentNode = currentNode;
        currentNode = currentNode.right;
      } else if (currentNode.value === value) {
        //We have a match, get to work!
        
        //Option 1: No right child: 
        if (currentNode.right === null) {
          if (parentNode === null) {
            this.root = currentNode.left;
          } else {
            
            //if parent > current value, make current left child a child of parent
            if(currentNode.value < parentNode.value) {
              parentNode.left = currentNode.left;
            
            //if parent < current value, make left child a right child of parent
            } else if(currentNode.value > parentNode.value) {
              parentNode.right = currentNode.left;
            }
          }
        
        //Option 2: Right child which doesnt have a left child
        } else if (currentNode.right.left === null) {
          currentNode.right.left = currentNode.left;
          if(parentNode === null) {
            this.root = currentNode.right;
          } else {
            
            //if parent > current, make right child of the left the parent
            if(currentNode.value < parentNode.value) {
              parentNode.left = currentNode.right;
            
            //if parent < current, make right child a right child of the parent
            } else if (currentNode.value > parentNode.value) {
              parentNode.right = currentNode.right;
            }
          }
        
        //Option 3: Right child that has a left child
        } else {

          //find the Right child's left most child
          let leftmost = currentNode.right.left;
          let leftmostParent = currentNode.right;
          while(leftmost.left !== null) {
            leftmostParent = leftmost;
            leftmost = leftmost.left;
          }
          
          //Parent's left subtree is now leftmost's right subtree
          leftmostParent.left = leftmost.right;
          leftmost.left = currentNode.left;
          leftmost.right = currentNode.right;

          if(parentNode === null) {
            this.root = leftmost;
          } else {
            if(currentNode.value < parentNode.value) {
              parentNode.left = leftmost;
            } else if(currentNode.value > parentNode.value) {
              parentNode.right = leftmost;
            }
          }
        }
      return true;
      }
    }
  }
}

const tree = new BinarySearchTree();
tree.insert(9)
tree.insert(4)
tree.insert(6)
tree.insert(20)
tree.insert(170)
tree.insert(15)
tree.insert(1)
//traverse(tree.root);
// const check = tree.lookup(2);
// if(check) console.log('found!')
// else console.log('Not found!')
let deletedNode = tree.remove(20,tree.root);
console.log(deletedNode);

//console.log(JSON.stringify(traverse(tree.root)))

//     9
//  4     20
//1  6  15  170

function traverse(node) {
//   const tree = { value: node.value };
//   tree.left = node.left === null ? null : traverse(node.left);
//   tree.right = node.right === null ? null : traverse(node.right);
//   return tree;
if(!node) {
    console.log('No Node')
    return;
}
console.log('parent',node.value);
if(node.left){
    console.log('left child: ',node.left.value);
}
if(node.right){
    console.log('right child: ',node.right.value);
}
traverse(node.left);
traverse(node.right);
}