// This problem has not been solved with JS


function getPath(graph,visited,sv,n,end,arr){
    

    if(sv === end){
        arr.push(end)
        return arr;
    }
    
    visited[sv] = true;
   
    for(let i=0; i<n; i++){
        if(i === sv) continue;
        if(graph[sv][i] === 1){
            if(!visited[i])
            {  console.log(i)
               arr.push(i);
               return getPath(graph,visited,i,n,end);
            }
        }
    }
   return arr;
}

function get(graph,visited,n){
    let arr = [];
   const res = getPath(graph,visited,0,n,8,arr);
   console.log(res);
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

let visited = [false,false,false,false,false,false,false,false]

let res = get(graph,visited,8);
console.log(res)