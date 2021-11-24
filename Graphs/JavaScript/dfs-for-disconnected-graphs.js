function printDfs(graph,n,visited,sv){
    console.log(sv);
    visited[sv] = true;

    for(let i=0; i<n; i++){
        if(i === sv) continue;
        if(graph[sv][i] === 1){
            if(!visited[i]){
                dfs(graph,visited,n,i);
            }
        }
    }
}

function dfs(graph,n){
    let visited = [false,false,false,false,false,false,false,false,false,false];
    for(let i=0; i<n; i++){
        if(!visited[i]){
            printDfs(graph,n,visited,i);
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



dfs(graph,10);