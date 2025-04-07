#include <iostream>
#include <stack>
using namespace std;
class Node{
    public:
       int data;
       Node* left;
       Node* right;
    
       Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
       }
    };
    void preorderTraversalUsingStack(Node* root){
        stack <Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            cout << temp->data;
            st.pop();
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
    }
    void InorderTraversalUsingStack(Node* root){
        stack <Node*> st;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            // cout << temp->data;
            if(temp->left) st.push(temp->left);
            st.pop();
            if(temp->right) st.push(temp->right);
        }
    }
int main(){
        Node* root = new Node(1);
        root->left = new Node(2);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right = new Node(3);
        root->right->left = new Node(6);
        root->right->right = new Node(7);

        InorderTraversalUsingStack(root);
}