#include <iostream>
#include <stack>
using namespace std;

class DLLNode{
    public:
     int data;
     DLLNode* next;
     DLLNode* prev;

     DLLNode(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
     }

};
void Print(DLLNode* head){
    DLLNode* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp= temp->next;
    }
}
// using stack 
DLLNode* reverseDLL(DLLNode* head) {
    // Your code here
    DLLNode* temp = head;
    stack <int> ans;
    while(temp!=NULL){
        ans.push(temp->data);
        temp= temp->next;
    }
    temp = head;
    while(temp!=NULL){
        temp->data = ans.top();
        ans.pop();
        temp= temp->next;
    }
    return head;
}

int main(){

    DLLNode* head = new DLLNode(1);
    DLLNode* second = new DLLNode(2);
    head->next= second;
    second->prev = head;
    DLLNode* third = new DLLNode(3);
    second->next=third;
    third->prev=second;
    DLLNode* fourth = new DLLNode(4);
    third->next=fourth;
    fourth->prev=third;

   
    Print(head);
    reverseDLL(head);
    // post reversal 
    cout << endl <<"After reversign the DLL" <<  endl;
    Print(head);
}