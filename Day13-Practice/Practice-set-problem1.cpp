#include<iostream>
using namespace std;

//creating node  class name Node
//data and next node addresses node
class Node{
    public:
    int data;
    Node* next;

    //create new node
    Node(int data){
        this->data = data;  //assigning node data
        this->next = NULL;  // assigning next node address null
    }
};

//traversing node function 
void print(Node* &head){
    Node* temp = head;

    while(temp !=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

//inserting node function at starting
void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        newNode  =  head;
        return;
    }
    newNode->next = head;
    head = newNode;
}

//inserting node function at ending
void insertAtEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    while ( temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

//inserting at any position
void insertAtPosition(Node* &head, int data, int position){
    Node* temp = head;
    int cnt = 1;
    if(cnt == position){
        insertAtHead(head,data);
        return;
    }

    while (cnt<position)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtEnd(head,data);
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

}


//driver code
int main(){
    Node* head = new Node(10);
    print(head);


    insertAtHead(head, 20);
    insertAtHead(head, 30);
    print(head);

    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    print(head);

    insertAtPosition(head,100,2);
    print(head);

     insertAtPosition(head,200,2);
    print(head);

    insertAtPosition(head,100,1);
    print(head);

    insertAtPosition(head,500,10);
    print(head);


    return 0;
}