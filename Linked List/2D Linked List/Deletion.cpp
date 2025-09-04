/*
Struct and Class of Doubly Linked List..
*/
// At Head
Node* DeleteHead(Node* head){
if(head == NULL || head -> next == NULL) return NULL;
  Node* prev = head;
head = head -> next;
head -> back = nullptr;
prev -> next = nullptr;
delete prev;
return head;

// At Tail
Node* DeleteTail(Node* head){
  if(head == NULL || head -> next == NULL) return NULL;
Node* tail = head;
while(tail -> next != NULL){
tail = tail -> next;
}
Node* prev = tail -> back;
prev -> next = nullptr;
tail -> back = nullptr;
  delete tail;
return head;
}




  
