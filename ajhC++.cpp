#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * prev;
    Node * next;
};

Node * head = NULL;
Node * tail = NULL;

void Insert(Node* targetNode, int value)
{
    Node * newnode = new Node;
    newnode->data = value;
    newnode->prev = targetNode;
    newnode->next = targetNode->next;

    targetNode->next->prev = newnode;
    targetNode->next = newnode;
}

void Frontoutput()
{
    Node * currentNode = head->next;

    while (currentNode != tail)
    {
        cout << currentNode->data << endl;
        currentNode = currentNode->next;
    }
}
void Backoutput()
{
    Node * currentNode = tail->prev;

    while (currentNode != head)
    {
        cout << currentNode->data << endl;
        currentNode = currentNode->prev;
    }
}

void Remove(Node* targetNode)
{
    Node * deleteNode = targetNode->next;
    if (deleteNode == NULL)
    {
        return;
    }
    deleteNode->next->prev = targetNode;
    targetNode->next = deleteNode->next;

    delete deleteNode;
}

int main()
{
    // 더미 노드1
    head = new Node;
    // 더미 노드2
    tail = new Node;

    head->next = tail;
    head->prev = NULL;
   
    tail->prev = head;
    tail->next = NULL;

    Insert(head, 10);
    Insert(head, 20);
    Insert(head, 30);

    Remove(head);

    Frontoutput();
    Backoutput();

    return 0;
}