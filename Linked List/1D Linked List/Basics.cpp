#include<iostream>
using namespace std;

// Making class Node, assingnig head and next pointer

class Node{
public:
int data;
Node* next;

public:
Node(int data1, Node* next1){
this-> data = data1;
this-> next = next1;
}
public:
Node(int data1){
  this-> data = data1;
  this-> next = nullptr;
 }
};

// convert Array into linked List
Node* conArr2LL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
 for(int i =1 ; i<arr.size(); i++){
 Node* temp = new Node(arr[i]);
 mover -> next = temp;
 }
 return head;
}

// Length of Linked List
int lengthofLL(Node* head){
int cnt = 0;
Node* temp = head;
while(temp){
cout<<temp -> data << " ";
temp = temp -> next;
  cnt++;
}

// Traversal of Linked List
int main(){
vector<int> arr = {12,3,4,6};
Node* head = conArr2LL(arr);
cout << lengthofLL(head);
Node* temp = head;
while(temp){
cout<<temp -> data << " ";
temp = temp -> next;
}
}





