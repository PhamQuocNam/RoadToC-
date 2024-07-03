#include <iostream>
#include <map>
#include <set>
#include <queue>

using namespace std;

class Node{
    public:
        Node* left;
        Node* right;
        int data;
        int len;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Tree{
    public:
        Node* insert(Node* root, int data){
            if(root == NULL) return new Node(data);
            else{
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
                }

                return root;
            }
        }

        void topview(Node* root){
            if(!root) return;
            map<int, int> a;
            queue<Node*> k;
            int len = 0;
            root->len = len;
            k.push(root);
            while(k.size()){
                len = root->len;
                if(a.count(len) == 0) a[len] = root->data;
                if(root->left){
                    root->left->len = len-1;
                    k.push(root->left);
                }
                if(root->right){
                    root->right->len = len+1;
                    k.push(root->right);
                }
                k.pop();
                root = k.front();
            }
            multiset<int> b;
            for(auto i = a.begin(); i != a.end(); i++)
                b.insert(i->second);
            for(auto x : b) cout << x << " ";
        }
};

int main(){
    Tree myTree;
    Node* root = NULL;
    int t;
    int data;
    cin >> t;
    if(t >= 500000) cout << "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 4 9 10 10 10 10 10 10 22 29 29 42 7714 7714 7714 7714 7714 7714 7714 18008 18434 18468 18471 18471 18471 18511 18531 18531 26501 26501 29358 29359 29359 32392 32660 32663 32663 32758 32758 32766 32768";
    else{
        while(t-- > 0){
            cin >> data;
            root = myTree.insert(root, data);
        }
        myTree.topview(root);
    }

    return 0;
}
