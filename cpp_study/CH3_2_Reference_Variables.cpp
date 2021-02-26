/*
    @ Reference Variables : 포인터처럼 어떤 것을 가르키는 변수
        data-type & reference-name = variable-name; // syntax
        ex1)
            float total = 100;
            float & sum = total;    // sum은 포인터변수와 다르게 물리적인 크기가 없고 total 변수를 가르킴

            cout << total;
            cout << sum;
            total = total + 10;
            sum 0;
        ex2)
            int n[10];
            int & x = n[10];    // x는 n[10]의 새로운 이름이 됨
            char & a = '\n';    // a는 줄바꿈 문자의 새로운 이름이 됨

*/

#include <iostream>
using namespace std;

void Pswap(int *, int *);
void Rswap(int &, int &);

int main()
{
    int num1, num2;

    num1 = 10;
    num2 = 20;

    cout << "Before calling any swap function" << endl << "num1 = " << num1 << " and " << "num2 = " << num2 << endl;

    Pswap(&num1, &num2);    // 포인터 변수를 서로 바꿈
    cout << "After calling Pswap()" << endl << "num1 = " << num1 << " and " << "num2 = " << num2 << endl;

    Rswap(num1, num2);    // 레퍼런스 변수를 서로 바꿈
    cout << "After calling Rswap()" << endl << "num1 = " << num1 << " and " << "num2 = " << num2 << endl;

    return 0;
}

void Pswap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void Rswap(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}