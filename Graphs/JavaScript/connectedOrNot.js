function dfs(graph,visited,n,sv){
 //   console.log(sv);
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

function checkConnection(graph,n){
    let visited = [false,false,false,false,false,false,false,false];
    dfs(graph,visited,n,0);
    for(let i=0; i<visited.length; i++){
        console.log(visited[i])
        if(!visited[i]){
            console.log('The graph is not connected')
            return;
        }
    }
    console.log('The graph is connected!');
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



checkConnection(graph,8);