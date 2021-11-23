function dfs(graph,visited,n,sv){
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

dfs(graph,visited,8,0);