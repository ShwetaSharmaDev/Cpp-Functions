#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;

node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    node* currnode = new node(nodes[idx]);
    currnode->left = buildTree(nodes); //left subtree
    currnode->right = buildTree(nodes); //right subtree

    return currnode;

};

/* Tree Traversals
root
left subtree
right subtree

3 recursion
DFS(depth first search)
preorder
inorder
postorder

1 iterative
BFS(breadth first search)
level order
*/

void preorder(node* root){

    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root){
    /* left subtree
    root at mid always
    right subtree */

    if(root == NULL){
        return ;
    }

    // left
    inorder(root->left);

    // root 
    cout<<root->data<<" ";

    // right 
    inorder(root->right);
}

void postorder(node* root){
    /* left subtree
    right subtree
    root */

    if(root == NULL){
        return;
    }

    // left
    postorder(root->left);
    // right
    postorder(root->right);
    // root
    cout<<root->data<<" ";

}


// level order traversal
void levelorder(node* root){
    if(root ==NULL){
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        cout << curr->data <<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

    cout<<endl;
}


void levelorderseq(node* root){
    if(root ==NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* curr = q.front();
        q.pop();

        if(curr == NULL){
            cout<<endl;

            if(q.empty()){
                break;
            }

            q.push(NULL); //to track a next line
        }else{
            cout << curr->data << " ";

            if (curr->left != NULL)
            {
                q.push(curr->left);
            }

            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }

    cout<<endl;
}


int main() {

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};    
    

    node* root = buildTree(nodes);
    cout<<"root = "<<root->data << endl;

    // preorder(root);
    // inorder(root);
    levelorderseq(root);
    cout<<endl;

    return 0;
}