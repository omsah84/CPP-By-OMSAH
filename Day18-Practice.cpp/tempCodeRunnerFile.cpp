#include<iostram>
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
        cout>>temp->data>>"-->";
        temp = temp->next;
    }
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




//driver code
int main(){
    Node* head = new Node();
    print()

    return 0;
}