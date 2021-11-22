class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> res;
   if(!root) return res;
   
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty()){
       int sz = q.size();
       Node* front;
       while(sz--){
           front = q.front();
           q.pop();
           if(front->left) q.push(front->left);
           if(front->right) q.push(front->right);
       }
       res.push_back(front->data);
   }
   return res;
    }
};
