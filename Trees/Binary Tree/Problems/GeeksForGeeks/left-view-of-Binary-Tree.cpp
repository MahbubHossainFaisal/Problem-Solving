vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   if(!root) return res;
   
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty()){
       int sz = q.size();
       res.push_back(q.front()->data);
       while(sz--){
           Node* front = q.front();
           q.pop();
           if(front->left) q.push(front->left);
           if(front->right) q.push(front->right);
       }
   }
   return res;
   
}