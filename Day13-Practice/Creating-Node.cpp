#include <iostream>
using namespace std;

// creating Node
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// printing element
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// insertathead
void insertAtHead(Node *&head, int data)
{
    Node* newNode =new  Node(data);

    if (head != NULL)
    {
        newNode->next = head;
        head = newNode;
    }
    head = newNode;
}

int main()
{
    Node* node = new Node(20);
    print(node);
    cout<<endl;

    insertAtHead(node, 30);
    insertAtHead(node, 40);
    insertAtHead(node, 50);
    print(node);
    
    return 0;

}