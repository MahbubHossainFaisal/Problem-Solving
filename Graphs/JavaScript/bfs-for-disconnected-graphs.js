function printBfs(graph,n,visited,sv){
    let queue = [];
    queue.push(sv);
    visited[sv] = true;
    while(queue.length >= 1){
        let element = queue.shift();
       // console.log('element',element)
        console.log(element);
        for(let i=0; i<n; i++){
            if(i === element) continue;
            if(graph[element][i] === 1 && !visited[i]){
                queue.push(i);
                visited[i] = true;
            }
        }
    }
}

function bfs(graph,n){
    let visited = [false,false,false,false,false,false,false,false,false,false];
    for(let i=0; i<n; i++){
        if(!visited[i]){
            printBfs(graph,n,visited,i);
        }
    }
}


let graph = [
    [0,1,0,0,0,0,0,0,0,0],
    [1,0,1,0,0,0,0,0,0,0],
    [0,1,0,1,1,0,0,0,0,0],
    [0,0,1,0,0,0,1,0,0,0],
    [0,0,1,0,0,1,0,0,0,0],
    [0,0,0,0,1,0,0,1,0,0],
    [0,0,0,1,0,0,0,1,0,0],
    [0,0,0,0,0,1,1,0,0,0],
    [0,0,0,0,0,0,0,0,0,1],
    [0,0,0,0,0,0,0,0,1,0],
]



bfs(graph,10);