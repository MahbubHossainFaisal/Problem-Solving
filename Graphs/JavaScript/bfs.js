function bfs(graph,visited,n,sv){
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

let graph = [
    [0,1,0,0,0,0,0,0],
    [1,0,1,0,0,0,0,0],
    [0,1,0,1,1,0,0,0],
    [0,0,1,0,0,0,1,0],
    [0,0,1,0,0,1,0,0],
    [0,0,0,0,1,0,0,1],
    [0,0,0,1,0,0,0,1],
    [0,0,0,0,0,1,1,0],
]

let visited = [false,false,false,false,false,false,false,false]

bfs(graph,visited,8,0);