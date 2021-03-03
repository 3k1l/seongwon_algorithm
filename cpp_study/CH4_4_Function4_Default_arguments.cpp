/*
    @Default Arguments
    
    - default parameters : 매개 변수에 값이 넘어오지 않는 경우, 디폴트 값을 받도록 선언된 매개변수
    ex) void star(int a = 5); // 함수의 프로토타입에 default 값 설정
        star(); == star(5);
*/

#include <iostream>
//#include <conio.h>

using namespace std;

int main()
{
    float amount;
    float value (float p, int n, float r = 0.15);
    void printline (char cha = '*', int len = 10);

    printline();

    amount = value (5000.00, 5);
    amount = value (10000.00, 3, 0.30);

    cout << "\r\nFinal Value =" << amount << endl;

    printline('=');

    //getch();
    return 0;
}

float value (float p, int n, float r)
{
    int year = 1;
    float sum = p;

    while (year <= n)
    {
        sum = sum * (1+r);
        year = year + 1;
    }
    return (sum);
}

void printline (char ch, int len)
{
    for (int i = 1; i<= len; i++)
    {
        printf("%c", ch);
        printf("\n");
    }
}