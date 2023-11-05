#include<iostream>
using namespace std;

//creating Node
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp =  head;
    while (temp !=NULL)
    {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

void insertAtStart(Node* &head, int data){
    Node* newNode = new Node(data);

    if(head == NULL){
        newNode = head;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(Node* head , int data){
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next= newNode;
}

void insertAtPosition(Node* &head, int data, int position){
    if(position == 1){
        insertAtStart(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
         cnt++;
    }
    if(temp->next == NULL){
        insertAtEnd(head, data);
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtStart(Node* &head){
    if(head == NULL){
        return;
    }
    head = head->next;
}

void deleteAtEnd(Node* &head){
    Node* currNode = head;
    // Node* nextNode = currNode->next;


    while(currNode != NULL){
        cout<<currNode->data<<" ";
        currNode= currNode->next;
    }

}

int main(){

    Node* head = new Node(-1);
    print(head);

    insertAtStart(head, 10);
    print(head);

    insertAtEnd(head, 10);
    print(head);
    insertAtEnd(head, 20);
    print(head);

    insertAtPosition(head,100,5);
    print(head);

    deleteAtStart(head);
    print(head);

    deleteAtStart(head);
    print(head);

    deleteAtEnd(head);
    print(head);

    return 0;
}