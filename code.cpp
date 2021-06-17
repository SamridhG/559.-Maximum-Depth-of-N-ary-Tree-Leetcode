/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
         vector<int>z;
        int count=0;
         vector<vector<int>>res;
        queue<Node *>A;
        A.push(root);
        A.push(NULL);
        while(!A.empty())
        {
            Node *rt=A.front();
            A.pop();
            if(rt==NULL && z.size()!=0)
            {
                res.push_back(z);
                z.clear();
                A.push(NULL);
                count++;
            }
            if(rt!=NULL)
            {
                z.push_back(rt->val);
                for(auto q:rt->children)
                {
                    A.push(q);
                }
            }
        }
        return count;
    }
    
};
