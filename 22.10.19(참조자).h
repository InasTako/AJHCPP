#pragma once
#include <iostream> 
using namespace std;

// ���۷��� �������� ���
/*
// �����͸� �̿��Ͽ� ������ ������� �ʽ��ϴ�.

// �����ڸ� ����ϴ� ����
//
void Function(int & x) // <- 1000 mb
{
    x = 100;
}
*/

// �ζ��� �Լ�
/*
// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.
inline void Function()
{
    cout << "����" << endl;
}
*/

// ĸ��ȭ
/*
class cellPhone
{
private:
    int brightness;
    int volume;

    bool power;

public:
    // ���� �����ϴ� �Լ�(Setter)
    // ���� �д� �Լ� (Getter)

    // Setter() �Լ�
    void SetVolume(int x)
    {
        volume = x;
    }
    // Getter() �Լ�
    int GetVolume()
    {
        return volume;
    }

    void SoundVolume(int volumeValue)
    {
        if (volumeValue >= 100)
        {
            volumeValue = 100;
        }
        else if (volumeValue < 0)
        {
            volumeValue = 0;
        }
        volume = volumeValue;

        cout << volume << endl;
    }


};
*/

int main()
{
    // �����ڶ�?
    /*
    // �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ϳ��� �̸��Դϴ�.

    // �ϳ��� �޸� ������ 2���� �̸��� �����ϴ� ���°� �Ǵ� ���Դϴ�.
    int a = 10;
    int & tvalue = a;
    int& ref = tvalue;

    // �����ڴ� �ʱ�ȭ�� ���� ������ ����� �� �����ϴ�.
    // �����ڴ� NULL�ε� �ʱ�ȭ�� �� �� �����ϴ�.
    int b = 20;

    int & va = a;
    va = b;

    cout << a << endl;

    Function(a);
    */

    // �ζ��� �Լ�
    /*
    // �Լ� �ȿ� �ִ� ������ ������ �� ����ؾ� �մϴ�.
    // �Լ��� ���� �� ȣ��Ǵ� �Լ��� ��� �ζ��� �Լ��� ����ϸ�
    // ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
    Function();
    */

    // ��ü ���� ���α׷���
    // ���� ���� ��ü�鳢�� ��ȣ�ۿ��� ����
    // ������ �����ϴ� ���α׷��� ����Դϴ�.


    // ĸ��ȭ
    /*
    // Ŭ������ �Ӽ�(����)�� ���(�Լ�)�� �ϳ��� ���� ����
    // ���� ���� ������ �Ϻθ� ���ο� ���߾� �����ϴ� �Լ��Դϴ�.

    cellPhone iphone;
    iphone.SetVolume(10);

    cout << iphone.GetVolume() << endl;
    */


    return 0;

}