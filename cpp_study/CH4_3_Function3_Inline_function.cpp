/*
    @Inline function

    - A function that is expanded in line when it is invoked.
    - The compiler replaces the function call with corresponding function code
*/


#include <iostream>

using namespace std;

inline float mul (float x, float y)
{
    return (x*y);
}

inline double div (double p, double q)
{
    return (p/q);
}

int main()
{
    float a = 12.345;
    float b = 9.82;

    cout << mul(a,b) << endl; // 함수의 호출이 아니라 코드가 대체 되는 방식
    cout << div(a,b) << endl; // 함수의 호출이 아니라 코드가 대체 되는 방식

    return 0;
}