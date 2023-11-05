#include <iostream>
using namespace std;

// creating Node
class Node
{
public:
    int data;
    Node *next;
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
    Node *newNode = new Node(data);

    if (head != NULL)
    {
        newNode->next = head;
        head = newNode;
    }
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(Node *&head, int data, int position)
{
    Node *newNode = new Node(data);

    Node *startNode = head;
    Node *nextNode = startNode->next;

    while (position > 0)
    {
        startNode = startNode->next;
        nextNode = startNode->next;
        position--;
    }
    newNode->next = nextNode;
    startNode->next = newNode;
}

int main()
{
    Node *node = new Node(20);
    print(node);
    cout << endl;

    insertAtHead(node, 30);
    insertAtHead(node, 40);
    insertAtHead(node, 50);
    print(node);
    cout << endl;

    insertAtEnd(node, 30);
    insertAtEnd(node, 40);
    insertAtEnd(node, 50);
    print(node);
    cout << endl;

    insertAtPosition(node, 100, 3);
    insertAtPosition(node, 200, 4);
    insertAtPosition(node, 300, 5);
    print(node);

    return 0;
}