#pragma once
#include<iostream>
using namespace std;

struct Node
{
    int key;
    int value;
    Node* next;
};

struct Bucket
{
    Node* head;
    int size;
};

struct Bucket* bucket = new Bucket[5];

int HashFunction(int key)
{
    return key % 5;
}

void Insert(int key, int value)
{

    int hashindex = HashFunction(key);

    // ��� ������ ���ο� ����� �ּҰ� ��ȯ�˴ϴ�.
    struct Node* newnode = new Node;
    newnode->key = key;
    newnode->value = value;
    newnode->next = NULL;


    // ����(hash)�� �ε����� size�� 0�̶�� 
    if (bucket[hashindex].size == 0)
    {
        // ����� ����
        bucket[hashindex].size++;

        // head �����͸� ���� ó�� ���� newnode�� ����Ű���� �մϴ�.
        bucket[hashindex].head = newnode;

    }
    else
    {
        newnode->next = bucket[hashindex].head;
        bucket[hashindex].head = newnode;
        bucket[hashindex].size++;
    }

}

void Remove(int key)
{
    int hashindex = HashFunction(key);
    Node* currentNode = bucket[hashindex].head;
    Node* prevNode = NULL;

    bool check = false;
    while (currentNode != NULL)
    {
        if (currentNode->key == key)
        {
            if (currentNode == bucket[hashindex].head)
            {
                bucket[hashindex].head = currentNode->next;
            }
            else
            {
                prevNode->next = currentNode->next;
            }

            bucket[hashindex].size--;
            check = true;
            delete currentNode;
        }
        else
        {
            currentNode = currentNode->next;
        }
        prevNode = currentNode;
    }

    if (check == true)
    {
        cout << "KEY : " << key << "�� �����Ǿ����ϴ�.";
    }
    else
    {
        cout << "KEY�� �������� �ʾ� ������ ������� �ʾҽ��ϴ�." << endl;
    }
}

void Search(int key)
{
    int hashIndex = HashFunction(key);

    struct Node* currentNode = bucket[hashIndex].head;
    bool check = false;
    while (currentNode != NULL)
    {
        if (currentNode->key == key)
        {
            check = true;
            break;
        }
        currentNode = currentNode->next;
    }
    if (check == true)
    {
        cout << "KEY : " << currentNode->key << "VALUE : " << currentNode->value;
    }
    else
    {
        cout << "���� ���� ã�Ƴ��� ���߽��ϴ�." << endl;
    }

}
int main()
{
    // �ؽ� ���̺�
    // �ؽ� �Լ��� ����ؼ� ��ȯ�� ���� index�λ�Ƽ�
    // key�� value�� �����ϴ� �ڷᱸ���Դϴ�.

    for (int i = 0; i < 5; i++)
    {
        bucket[i].head = NULL;
        bucket[i].size = 0;
    }
    Insert(10, 3);
    Insert(20, 12);
    Insert(3, 6);
    Insert(2, 1);

    struct Node* currentNode;

    for (int i = 0; i < 5; i++)
    {
        currentNode = bucket[i].head;
        cout << "Bucket [" << i << "]";


        while (currentNode != NULL)
        {
            cout << " KEY : " << currentNode->key << " VALUE : " << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }

    return 0;
}