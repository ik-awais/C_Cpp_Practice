#include <iostream>
struct node{
    int val;
    node *next;
    node(int val=0) : val(val), next(nullptr) {}
};
void pushFront(node*&head, int val){
    if(!head) { head = new node(val); return;}
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}
void reverseList(node*& head){
    node* previous = nullptr;
    node* current = head;
    while(current)
    {
        node* temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    head = previous;
}
void printList(const node*head){
    if(!head) return;
    std::cout << "List: "; 
    while(head) { std::cout << head->val << "->"; head = head->next;}
    std::cout << "NULL\n";
}

int main(){
    node *list = nullptr;
    pushFront(list, 1);
    pushFront(list, 2);
    pushFront(list, 3);
    std::cout << "List after pushing 1,2,3: "; 
    printList(list);
    std::cout << "List after reversal: ";
    reverseList(list);
    printList(list);
    return 0;  
}