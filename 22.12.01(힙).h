#include<iostream>
using namespace std;
#define MEMORY 100

// �ִ� ��
/*
struct Node
{
    int data[MEMORY];
    int size = 0;
};

void Insert(Node* root, int value)
{
    int index;

    // ���� �����Ͱ� �� �� ���¶�� return
    if (root->size >= MEMORY - 1)
    {
        return;
    }

    root->size++;
    index = root->size;
    root->data[index] = value;

    // 1. ��Ʈ ����� ��
    // 2. �θ� ����� ���� Ŭ ��
    while (index != 1 && root->data[index / 2] < root->data[index])
    {

        swap(root->data[index / 2], root->data[index]);

        index = index / 2;
    }

}

int Remove(Node* root)
{
    int deleteValue = root->data[1];

    if (root->size == 0)
    {
        return;
    }

    root->data[1] = root->data[root->size];
    root->size--;

    int currentNode = 1;
    int childNode;
    int temp;

    while (currentNode *2 <= root -> size)
    {
        childNode = currentNode * 2;

        if (root->data[childNode] < root->data[childNode + 1])
        {
            childNode++;
        }
        if (root->data[childNode] < root->data[currentNode])
        {
            break;
        }

        swap(root->data[currentNode], root->data[childNode]);

        currentNode = childNode;

    }

    return deleteValue;
}
*/


int main()
{
    // ��
    /*
    // �ִ񰪰� �ּڰ��� ã�Ƴ��� ������ ������ �ϱ� ����
    // ��ȵ� ���� ���� Ʈ���� �⺻���� �� �ڷᱸ���Դϴ�.

    // �ִ� ��
    // �θ� ����� Ű ���� �ڽ� ����� Ű ������ ũ�ų� ���� ���� ����Ʈ��

    // �ּ� ��
    // �θ� ����� Ű ���� �ڽ� ����� Ű ������ �۰ų� ���� ���� ����Ʈ��

    Node heap;
    Insert(&heap, 10);
    Insert(&heap, 20);
    Insert(&heap, 30);
    Insert(&heap, 40);
    Insert(&heap, 50);

    cout << Remove(&heap) << endl;


    for (int i = 1; i <= 5; i++)
    {
        cout << heap.data[i] << endl;
    }

    */

    return 0;
}