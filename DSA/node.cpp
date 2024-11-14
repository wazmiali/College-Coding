// Linked List
#include<iostream>
using namespace std;

class Node{

      public:
      int data;
      Node* next;

      Node(int data){
            this -> data = data;
            this -> next = NULL;
      }
      
};

void insertAtHead(Node* &head, int d){
      Node* temp = new Node(d);
      temp -> next = head;
      head = temp;
}

void insertAttail(Node* &tail, int d){
      Node* temp = new Node(d);
      tail -> next = temp;
      tail = temp;
}

void print(Node* &head){
      Node* temp = head;

      while(temp !=NULL){
            cout << temp -> data <<"";
            temp = temp -> next;
      }
      cout << endl;
}

int main(){
      
      // created a new node
      Node* nodel = new Node(10);
      // cout << nodel -> data << endl;
      // cout << nodel -> next << endl;

      Node* head = nodel;
      Node* tail = nodel;
      print(head);

      insertAttail(tail, 12);
      print(head);

      insertAttail(tail, 15);
      print(head);

      return 0;      
}
