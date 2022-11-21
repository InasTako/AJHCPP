#pragma once
#include<iostream>
using namespace std;

// 클래스의 메모리 구조
class Object
{
    // 클래스 오프셋
    /*
    // 동일한 오브젝트 안에서 오브젝트 처음부터 주어진 요소나
    // 지점까지의 변위차를 정수형으로 나타내는 값입니다.

    // ex) A[6] = "ABCDE";
    // C라는 값은 A 시작점에서 2의 오프셋을 가지는 값입니다.
    */


public:
    char charData; // 1byte
    int intData;   // 4byte
    double doubleData; // 8byte  

    // static 변수는 클래스 내부에 메모리가 잡히지 않습니다.
    static int staticData; // 4byte

    void StaticDataFunction()
    {
        staticData++;
    }

};

// 클래스 내부에 있는 static 변수는 클래스 외부에서
// 전역 변수처럼 초기화를 해야합니다.
int Object::staticData = 0;

int main()
{
    Object object1;
    Object object2;
    Object object3;

    object1.StaticDataFunction();
    object2.StaticDataFunction();
    object3.StaticDataFunction();

    cout << Object::staticData << endl;

    // 클래스의 메모리
    /*
    object.charData = 'A';
    object.intData = 10;
    object.doubleData = 30.5;

    // 클래스의 메모리 크기를 결저하는 것은 멤버 변수 중에서
    // 가장 큰 자료형의 배수가 되도록 설정합니다.
    cout << "Object의 클래스의 크기 : " << sizeof(object) << endl;
    */

    // 클래스의 오프셋
    /*
    cout << (int)(&(((Object*)0)->charData)) << endl;
    cout << (int)(&(((Object*)0)->intData)) << endl;
    cout << (int)(&(((Object*)0)->doubleData)) << endl;
    */


    return 0;
}