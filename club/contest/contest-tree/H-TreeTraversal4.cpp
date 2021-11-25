#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node * left;
        Node * right;
    public:
        Node(int data) {
            this -> data = data;
            this -> left = nullptr;
            this -> right = nullptr;            
        }
        int getData() {
            return this -> data;
        }
};

class BST {
    public:
       Node * root; 
        BST() {
            this -> root = nullptr;
        }

        Node * getRoot() {
            return this -> root;
        }

        void insert(int input) {
            if (root == nullptr) {
                root = new Node(input);
            }
            else {
                this -> insert2(input, root);
            }
        }

        void insert2(int input, Node * actual) {
            if (actual -> data > input) {
                if (actual -> left == nullptr) {
                    actual -> left = new Node(input);
                }
                else {
                    this -> insert2(input, actual -> left);
                }
            }
            else if (actual -> data < input){
                if (actual -> right == nullptr) {
                    actual -> right = new Node(input);
                }
                else {
                    this -> insert2(input, actual -> right);
                }
            }
            else {
                cout << "El valor ya existe en el arbo\n";
            }
        }

        void preorder(Node * root) {
            if (root == nullptr) {
                return;
            }
                cout << root -> data << " ";
                preorder(root -> left);
                preorder(root -> right);          
        }

        void inorder(Node * root) {
            if (root == nullptr) return;
            inorder(root -> left);
            cout << root -> data << " ";
            inorder(root -> right);
        }

        void postorder(Node * root) {
            if (root == nullptr) return;
            postorder(root -> left);
            postorder(root -> right);
            cout << root -> data << " ";
        }
        
        int height(Node* root) {
        if(root == nullptr){
            return -1;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        return max(left, right) + 1;
        }
        
        void bfs_print(Node *node) {
            if (node == nullptr) return;
            
            queue<Node*> q;
            q.push(node);

            while (!q.empty())
            {
                Node *aux = q.front();
                q.pop();
                
                cout << aux->data << " ";
                
                if(aux->left != nullptr)
                    q.push(aux->left);
                if(aux->right != nullptr)
                    q.push(aux->right);
            }
            cout << "\n";
            return;
        }
};

int main() {
    BST bst;

    int t;
    int data;

    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin  >> data;
        bst.insert(data);
    }
    
    bst.bfs_print(bst.getRoot());
    

    return 0;
}