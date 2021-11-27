function dfs(graph,visited,n,sv,e){
    console.log('SV:', sv);
    console.log('E: ',e);
    if(sv === e){
        return 'has path!'
    }

    visited[sv] = true;

    for(let i=0; i<n; i++){
        if(i === sv) continue;
        if(graph[sv][i] === 1){
            if(!visited[i]){
                return dfs(graph,visited,n,i,e);
            }
        }
    }
     return 'No'
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

const res = dfs(graph,visited,8,0,9);

console.log(res);