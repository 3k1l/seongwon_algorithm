/*
    @Function Overloading

    - 함수 중복
        - 동일한 이름의 함수가 공존
            - 다형성
            - C 언어에서는 불가능
        - function overloading
        - 함수 중복이 가능한 범위
            - 보통 함수들 사이
            - 클래스의 멤버 함수들 사이
            - 상속 관계에 있는 기본 클래스와 파생 클래스의 멤버 함수들 사이

    - 함수 중복 성공 조건
        - 중복된 함수들의 이름 동일
        - 중복된 함수들의 매개 변수 타입이 다르거나 개수가 달라야 함
        - 리턴 타입은 함수 중복과 무관

*/
#include <iostream>
using namespace std;
int sum(int a, int b, int c) {
    return a + b + c;
}

double sum(double a, double b) {
    return a + b;
}

int sum(int a, int b) {
    return a + b;
}

int area (int side);
int area (int length, int breadth);
double area (double radius);

int main() {
    cout << sum(2, 5, 33) << endl;
    cout << sum(12.5, 33.6) << endl;
    cout << sum(2, 6) << endl;

    cout << " Calling the area() function for computing the area of a square (sid = 5) - " << area(5) << endl;
    cout << " calling the area() function for computing the area of a rectangle (length = 5, breadth = 10) - " << area(5, 10) << endl;
    cout << " Calling the area() function for computing the area of a circle (radius = 5.5) - " << area(5.5) << endl;
}

int area (int side) {
    return (side * side);
}

int area (int length, int breadth) {
    return (length * breadth);
}

double area (double radius) {
    return (3.14 * radius * radius);
}