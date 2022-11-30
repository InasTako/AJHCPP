#pragma once
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* CreatNode(int value, Node* leftPtr, Node* rightPtr)
{
    Node* newnode = new Node;
    newnode->data = value;
    newnode->left = leftPtr;
    newnode->right = rightPtr;

    return newnode;
}

// ���� ��ȸ
// 1. �ڱ� �ڽź��� ���
// 2. ������ �ڽ� ��带 �湮(���)
// 3. �������� �ڽ� ��带 �湮(���)
// ��� �Լ� Ȱ��
void Preorder(Node* root)
{
    if (root != NULL)
    {   // �� ���
        cout << root->data << " ";
        // ���� �ڽĳ�� �湮
        Preorder(root->left);
        // ������ �ڽĳ�� �湮
        Preorder(root->right);
    }
}

// ���� ��ȸ
// 1. ���� �ڽ� ��带 �湮
// 2. �ڱ� �ڽ��� ��带 ���
// 3. ������ �ڽ� ��带 �湮
void Inorder(Node* root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

// ���� ��ȸ
// 1. ���� �ڽ� ��带 ���
// 2. ������ �ڽ� ��带 ���
// 3. �ڱ� �ڽ��� ��带 ���
void Postorder(Node* root)
{
    if (root != NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    // Ʈ�� ������?
    // �� ��忡�� �����ؼ� �ٸ� �������� ��ȸ�Ͽ�
    // �ڱ� �ڽſ��� ���ƿ��� ��ȯ�� ���� ���� �׷����Դϴ�.

    // ���� Ʈ��
    // �ִ� 2���� �ڽ� ��带 ������ Ʈ���Դϴ�.

    Node* newnode7 = CreatNode(7, NULL, NULL);
    Node* newnode6 = CreatNode(6, NULL, NULL);
    Node* newnode5 = CreatNode(5, NULL, NULL);
    Node* newnode4 = CreatNode(4, NULL, NULL);
    Node* newnode3 = CreatNode(3, newnode6, newnode7);
    Node* newnode2 = CreatNode(2, newnode4, newnode5);
    Node* newnode1 = CreatNode(1, newnode2, newnode3);

    // Preorder(newnode1);
    // Inorder(newnode1);
    Postorder(newnode1);

    return 0;
}