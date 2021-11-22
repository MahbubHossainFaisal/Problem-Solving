class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> res;
        if(!root) return res;
        map<int,int> mp;

        queue<pair<Node*,int>> q;

        q.push({root,0});

        while(!q.empty()){

            Node* t = q.front().first;
            int hd = q.front().second;
            q.pop();
            mp[hd] = t->data;

            if(t->left){

                q.push({t->left,hd-1});
            }
            if(t->right){

                q.push({t->right,hd+1});
            }
        }

        for(auto i: mp){
            res.push_back(i.second);
        }


        return res;
    }
};
