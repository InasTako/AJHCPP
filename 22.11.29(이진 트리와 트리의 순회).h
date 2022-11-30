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

// 전위 순회
// 1. 자기 자신부터 출력
// 2. 왼쪽의 자식 노드를 방문(출력)
// 3. 오른쪽의 자식 노드를 방문(출력)
// 재귀 함수 활용
void Preorder(Node* root)
{
    if (root != NULL)
    {   // 값 출력
        cout << root->data << " ";
        // 왼쪽 자식노드 방문
        Preorder(root->left);
        // 오른쪽 자식노드 방문
        Preorder(root->right);
    }
}

// 중위 순회
// 1. 왼쪽 자식 노드를 방문
// 2. 자기 자신의 노드를 출력
// 3. 오른쪽 자식 노드를 방문
void Inorder(Node* root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

// 후위 순회
// 1. 왼쪽 자식 노드를 출력
// 2. 오른쪽 자식 노드를 출력
// 3. 자기 자신의 노드를 출력
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
    // 트리 구조란?
    // 한 노드에서 시작해서 다른 정점들을 순회하여
    // 자기 자신에게 돌아오는 순환이 없는 연결 그래프입니다.

    // 이진 트리
    // 최대 2개의 자식 노드를 가지는 트리입니다.

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