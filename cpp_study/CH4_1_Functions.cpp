/*
    Reviews function call

    @ 값에 의한 호출, call by value
        - 함수가 호출되면 매개 변수가 스택에 생성됨
        - 호출하는 코드에서 값을 넘겨줌
        - 호출하는 코드에서 넘어온 값이 매개 변수에 복사됨
    @ 주소에 의한 호출, call by address
        - 함수가 호출되면 포인터 타입의 매개 변수가 스택에 생성됨
        - 호출하는 코드에서 명시적으로 주소를 넘겨줌
        - 호출하는 코드에서 넘어온 주소 값이 매개 변수에 저장됨.

*/

#include <iostream>
using namespace std;

void swap_value(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap_address(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int m = 2, n = 9;
    swap_value(m,n);
    cout << "m = " << m << " n = " << n << endl; // m = 2 n = 9
    swap_address(&m,&n);
    cout << "m = " << m << " n = " << n << endl; // m = 9 n = 2

}