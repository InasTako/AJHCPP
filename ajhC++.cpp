#include<iostream>
using namespace std;

struct Node
{
    int key;
    int value;
    Node * next;
};

struct Bucket
{
    Node * head;
    int size;
};

struct Bucket * hash;

Node * CreatNode(int key, int value)
{
    Node * newnode = new Node;
    newnode->key = key;
    newnode->value = value;
    newnode->next = NULL;

    return newnode;
}

int HashFunction(int key)
{
    return key % 5;
}

void Insert(int key, int value)
{
    // hash[insex].size == 0
    int hashindex = HashFunction(key);

    // 방금 생성한 새로운 노드의 주소가 반환됩니다.
    struct Node * newnode = CreatNode(key, value);

    Bucket* hash = new Bucket[5];

    // 버켓(hash)의 인덱스의 size가 0이라면 
    if (hash[hashindex].size == 0)
    {
        // 사이즈값 증가
        hash[hashindex].size++;

        // head 포인터를 새로 처음 들어온 newnode를 가리키도록 합니다.
        hash[hashindex].head = newnode;
        
    }
    else
    {

    }

}

int main()
{
    // 해시 테이블
    // 해시 함수를 사용해서 변환한 값을 index로삼아서
    // key와 value를 저장하는 자료구조입니다.

    

    return 0;
}