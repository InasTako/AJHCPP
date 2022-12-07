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

    // 방금 생성한 새로운 노드의 주소가 반환됩니다.
    struct Node* newnode = new Node;
    newnode->key = key;
    newnode->value = value;
    newnode->next = NULL;


    // 버켓(hash)의 인덱스의 size가 0이라면 
    if (bucket[hashindex].size == 0)
    {
        // 사이즈값 증가
        bucket[hashindex].size++;

        // head 포인터를 새로 처음 들어온 newnode를 가리키도록 합니다.
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
        cout << "KEY : " << key << "이 삭제되었습니다.";
    }
    else
    {
        cout << "KEY가 존재하지 않아 삭제가 진행되지 않았습니다." << endl;
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
        cout << "현재 값을 찾아내지 못했습니다." << endl;
    }

}
int main()
{
    // 해시 테이블
    // 해시 함수를 사용해서 변환한 값을 index로삼아서
    // key와 value를 저장하는 자료구조입니다.

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