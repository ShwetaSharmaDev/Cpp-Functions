#include <iostream>
#include <vector>

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == 1){
        return NULL;
    }

    node* currnode = new node(nodes[idx]);
    currnode->left = buildTree(nodes);
    currnode->right = buildTree(nodes);

    return currnode;
};

using namespace std;
int main() {

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    return 0;
}