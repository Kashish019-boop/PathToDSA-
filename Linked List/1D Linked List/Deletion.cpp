#include<iostream>
using namespace std;

/*
All the class and constructor function will be here, I'll write the main func only..
*/

// Delete Head of LL
Node* DeleteHead(Node* head){
  Node* temp = head;
head = head -> next;
free(temp); 
// Delete temp;
return head;
}

// Delete Tail of LL
Node* DeleteTail(Node* head){
  if(head == NULL || head -> next == NULL) return NULL;
Node* temp = head;
while(temp -> next -> next != NULL){
temp = temp -> next;
}
delete temp -> next);
temp -> next = NULL;
return head;
}

// Delete any position
Node* deleteK(Node* head, int k){
if(head == NULL) return head;
if(k == 1){
Node* temp = head;
head = head -> next;
free(temp);
  return head;
}
int cnt = 0;
Node* temp = head;
Node* prev = NULL;
while(temp != 0){
cnt++;
if(cnt == k){
prev -> next = prev -> next -> next;
free(temp);
break;
} 
prev = temp;
temp = temp -> next;
}
return head;

// Delete by value


