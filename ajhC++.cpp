#include <iostream> 
#include <conio.h>
#include <time.h>
using namespace std; 

// ���� �Ҹ��ڶ�?
/*
// �������� ������ �Ҹ����Դϴ�.
// ���� �Ҹ��ڴ� ����������, ���� �����ڴ� �������� �ʽ��ϴ�.

class A 
{
public:
    A()
    {
        cout << "AŬ���� ����" << endl;
    }
    virtual ~A()
    {
        cout << "AŬ���� �Ҹ�" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "BŬ���� ����" << endl;
    }
    virtual ~B()
    {
        cout << "BŬ���� �Ҹ�" << endl;
    }
};
*/

// ������
/*
// Ŭ������ ��� �Լ��� �ƴ�����, Ŭ������ friend��� �����ϰ� �Ǹ�
// Ŭ������ ��� �Լ�ó�� private ����� ������ �� �ִ� ����Դϴ�. 

class PeopleA
{
private:
    int age;
    // ģ���� ������ Ŭ������ �̸��� �����մϴ�.

    friend void Information(PeopleA a) // <- ���� �Լ��� ����
    {
        cout << "PeopleA Ŭ���� ����" << endl;
    }

    // friend Ű����� public, private, protected
    // ��𿡼��� ��밡���մϴ�.
    friend class PeopleB;
public:

    PeopleA(int age)
    {
        this->age = age;
    }
};

class PeopleB
{
public:
    void FriendInformation(PeopleA people)
    {
        cout << people.age << endl;
    }
};
*/

int main()
{
    // ���� �Ҹ���
    /*
    // ���� �Ҹ��ڰ� ȣ��Ǹ� ��� ������ �� �Ʒ��� �ִ� ���� Ŭ������ 
    // �Ҹ��ڰ� ��� ȣ��Ǹ鼭 ���� Ŭ������ �Ҹ��ڰ� ������� ȣ��˴ϴ�.
    A * aptr = new B();
    delete aptr;
    */

    // ������
    /*
    PeopleA a(10);
    Information(a);
    PeopleB b;
    b.FriendInformation(a);
    */

    // ����
    /*
    int num1 = 0;
    int num2 = 0;

    cin >> num1 >> num2;
    cout << num2 % 10 * num1 << endl;
    cout << num2 / 10 % 10 * num1 << endl;
    cout << num2 / 100 % 10 * num1 << endl;
    cout << num1 * num2 << endl;
    */

    // �ߺ����� �ʴ� ������
    // 1.�迭�� �����մϴ�.
    // 2.�迭�� ���������� ���� �����մϴ�.

    // �迭�� �ε��� == �迭�� �ε��� +1
    int array[10];

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 10+1;

        if (array[i] == i)
        {

        }
        else if (array[i] != i)
        {

        }
        
    }

    return 0;
}
