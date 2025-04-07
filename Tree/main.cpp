#include <iostream>
#include <vector>
#include <queue>
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
void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
   }
void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
   }
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
    
   }
   vector<vector<int>> levelOrderTraversal(Node* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector <int> level;

        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);

    }
    return ans;
   }

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // cout << root->data;
    // cout << root->left->data;
    // cout << "PreOrdeTraversal : ";
    // preorderTraversal(root);
    // cout << endl;
    // cout << "PostorderTraversal : ";
    // postorderTraversal(root);
    // cout << endl;
    // cout << "InorderTraversal : ";
    // inorderTraversal(root);
    // cout << endl;
    vector<vector<int>> ans ;
    ans = levelOrderTraversal(root);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}