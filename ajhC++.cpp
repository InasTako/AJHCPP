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

    // ��� ������ ���ο� ����� �ּҰ� ��ȯ�˴ϴ�.
    struct Node * newnode = CreatNode(key, value);

    Bucket* hash = new Bucket[5];

    // ����(hash)�� �ε����� size�� 0�̶�� 
    if (hash[hashindex].size == 0)
    {
        // ����� ����
        hash[hashindex].size++;

        // head �����͸� ���� ó�� ���� newnode�� ����Ű���� �մϴ�.
        hash[hashindex].head = newnode;
        
    }
    else
    {

    }

}

int main()
{
    // �ؽ� ���̺�
    // �ؽ� �Լ��� ����ؼ� ��ȯ�� ���� index�λ�Ƽ�
    // key�� value�� �����ϴ� �ڷᱸ���Դϴ�.

    

    return 0;
}