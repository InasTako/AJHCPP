#include<iostream>
using namespace std;



int main()
{
    // ���� �� ���� ��?
    int array[30];
    int temparray[30];

    for (int i = 0; i < 30; i++)
    {
        array[i] = i+1;

    }
    for (int i = 0; i < 28; i++)
    {
        cin >> temparray[i];
    }
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = 0;
            }
        }
    }
    for (int i = 0; i < 30; i++)
    {
        if(array[i] != 0)
        cout << array[i] << endl;
    }

    return 0;
}