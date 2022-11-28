#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
};

Node * FrontInsert(Node * head, int value)
{
    Node * newnode = new Node;
    newnode->data = value;
    
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        newnode->next = head->next;
        head->next = newnode;
    }

    return head;
}

Node * BackInsert(Node* head, int value)
{
    Node * newnode = new Node;
    newnode->data = value;

    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        newnode->next = head->next;
        head->next = newnode;
        head = newnode;
    }


    return head;
}

int main()
{
    // 원형 연결 리스트
    Node * head = NULL;
    
    head = FrontInsert(head, 100);
    head = FrontInsert(head, 200);
    head = BackInsert(head, 500);
    
    Node* currentNode = head->next;
    while (currentNode != head)
    {
        cout << currentNode->data << endl;
        currentNode = currentNode->next;    
    }
    cout << currentNode->data << endl;

    return 0;
}