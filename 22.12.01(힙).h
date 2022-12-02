#include<iostream>
using namespace std;
#define MEMORY 100

// 최대 힙
/*
struct Node
{
    int data[MEMORY];
    int size = 0;
};

void Insert(Node* root, int value)
{
    int index;

    // 힙에 데이터가 꽉 찬 상태라면 return
    if (root->size >= MEMORY - 1)
    {
        return;
    }

    root->size++;
    index = root->size;
    root->data[index] = value;

    // 1. 루트 노드일 때
    // 2. 부모 노드의 값이 클 때
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
    // 힙
    /*
    // 최댓값과 최솟값을 찾아내는 연산을 빠르게 하기 위해
    // 고안된 완전 이진 트리를 기본으로 한 자료구조입니다.

    // 최대 힙
    // 부모 노드의 키 값이 자식 노드의 키 값보다 크거나 같은 완전 이진트리

    // 최소 힙
    // 부모 노드의 키 값이 자식 노드의 키 값보다 작거나 같은 완전 이진트리

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