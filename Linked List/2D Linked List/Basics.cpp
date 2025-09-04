#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1, Node* back1){
        this -> data = data1;
        this -> next = next1;
        this -> back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

//Conversion of Arr into Doubly Linked List
Node* conArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i =1 ; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

// Traverse
int main(){
    vector<int> arr = {2,4,7,9};
    Node* head = conArr2DLL(arr);
}
