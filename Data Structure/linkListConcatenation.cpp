#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

Node* concat(Node* head1 , Node* head2){
   if (head1 == nullptr){
    return head2;
   }else if (head2 == nullptr){
    return head1;
   }

    Node* t = head1;

    for ( ; t->next != nullptr ; t = t->next);

    t->next = head2;
    head2->prev = t;

    return head1;
}

void coutList(Node* head){
    while (head != nullptr) {
        std::cout << head->data << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main(){
    Node* head1 = new Node(1);
    head1->prev = nullptr;
    head1->next = new Node(2);
    head1->next->prev = head1;
    head1->next->next = new Node(3);
    head1->next->next->prev = head1->next;
    
    coutList(head1);

    Node* head2 = new Node(4);
    head2->prev = nullptr;
    head2->next = new Node(5);
    head2->next->prev = head2;
    head2->next->next = new Node(6);
    head2->next->next->prev = head2->next;

    coutList(head2);

    head1 = concat(head1 , head2);
    coutList(head1);

    return 0;
}