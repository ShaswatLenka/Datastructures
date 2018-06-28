let tree;
function setup(){
    noCanvas();
    tree = new Tree();
    for(let i = 0; i<10; i++ ){
        tree.addNode(floor(random(1,100)));
    }
    console.log(tree);
    tree.traverse();
}