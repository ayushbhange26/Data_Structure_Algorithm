#include <iostream>
using namespace std;

class DDLLNode{
    public:
     int data;
     DDLLNode* next;
     DDLLNode* prev;

     DDLLNode(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
     }
};
int main(){

    DDLLNode* head = new DDLLNode(1);
    cout << head->data;
}