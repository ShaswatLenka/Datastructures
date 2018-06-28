/*
*
*main file for binary search tree structure
*
*/


class Node {
    constructor(val){
        this.value = val;
        this.left = null;
        this.right = null;
    }
    
    
    addNode(n){
        if(n.value < this.value){
            if(this.left == null){
                this.left = n;
            }else{
                this.left.addNode(n);
            }
        }else if(n.value > this.value){
            if(this.right == null){
                this.right = n;
            }else{
                this.right.addNode(n);
            }
        }
    }
    
    visit(){
        if(this.left != null){
            this.left.visit();
        }
        console.log(this.value);
        if(this.right != null){
            this.right.visit();
        }
    }
    
    search(val){
        if(val == this.value){
            return this;
        } 
        if(val < this.value && this.left != null){
           return this.left.search(val);
        }
        else if(val > this.value && this.right.value != null){
            return this.right.search(val);
        }
        return null;
    }
}
class Tree{
    constructor(){
        this.root = null;
    }
    
    addNode(n){
        var node = new Node(n);
        if(this.root == null){
            this.root = node;
        }else{
            this.root.addNode(node);
        }
    }
    
    traverse(){
        this.root.visit();
    }
    
    search(val){
        var found = this.root.search(val);
        return found;
    }
}

