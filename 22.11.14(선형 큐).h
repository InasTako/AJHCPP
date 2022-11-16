#pragma once
#include<iostream>
using namespace std;


int buffer[5] = { 0, };

class Queue
{
private:
    int rear = -1;
    int front = -1;

public:
    void BufferPrint()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << buffer[i] << endl;
        }
    }
    bool Empty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool IsFull()
    {
        if (rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Fush(int value)
    {
        if (IsFull() == true)
        {   // �����Ͱ� �� ���ִ� ���¶�� �����͸� �� �ֵ��� �ؾ��մϴ�.
            cout << "�����͸� ���� �� �����ϴ�." << endl;
        }
        else
        {
            buffer[++rear] = value;
        }
    }
    int Pop()
    {
        // rear == front
        if (Empty() == true)
        {   // �����̳ʿ� �����Ͱ� ���ٸ� �����͸� �� �������� �ؾ��մϴ�.
            cout << "ť�� ������ϴ�." << endl;
            return 0;
        }
        else
        {
            // ����� ���� ��� �����ϴ� �ܰ��Դϴ�.
            int temp = buffer[++front];

            buffer[front] = 0;

            return temp; // return ���� ��ȯ�ϴ� ��ɵ� �ϸ鼭 �Լ��� ������� �ݴϴ�.
        }

    }

    // push == Enqueue
    // pop == Dequeue

};

int main()
{
    // ť
    // FIFO
    // ���� ���� �����Ͱ� ���� ������ �����Դϴ�.

    // ���� ť
    // ���� ť�� ������
    // �����͸� �߰��� �� index�� ���� �������� �ʰ� ������ ��Ű�� ������ 
    // ������ �տ� �ִ� �����Ͱ� ���� ���� ť�� �����͸� ������ �� ���� ���°� ��Ÿ���ϴ�.

    Queue queue;
    queue.Fush(1);
    queue.Fush(2);
    queue.Fush(3);
    queue.Fush(4);
    queue.Fush(5);
    queue.BufferPrint();

    cout << queue.Pop() << endl;
    cout << queue.Pop() << endl;
    cout << queue.Pop() << endl;
    cout << queue.Pop() << endl;
    cout << queue.Pop() << endl;
    queue.BufferPrint();

    queue.Fush(10);


    return 0;
}