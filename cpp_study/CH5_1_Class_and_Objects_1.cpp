/*
    @ encapsulation
    - 객체의 본질적인 특성
    - 객체를 캡슐로 싸서 그 내부를 보호하고 볼 수 없게 함
    - 캡슐화 목적 : 객체 내 데이터에 대한 보안, 보호, 외부 접근 제한

    - C++ 구조체
        - 상속, 멤버, 접근 지정 등 모든 것이 클래스와 동일
        - 클래스와 유일하게 다른 점
            - 구조체의 디폴트 접근 지정 : public
            - 클래스의 디폴트 접근 지정 : private

    - 구조체 객체 생성
        - struct 키워드 생략
    
    - 구조체의 유용성
        - 관련 있는 데이터를 하나의 자료형으로 묶을 수 있다.
    
    - 클래스
        - 객체를 만들어내기 위해 정의된 설계도, 틀
        - 클래스는 객체가 아니고 실체도 아니다
        - 멤버 변수와 멤버 함수 선언

    - 객체
        - 객체는 생성될 때 클래스의 모양을 그대로 가진다
        - 멤버 변수와 멤버 함수로 구성
        - 메모리에 생성, 실체(instance)라고도 부름
        - 하나의 클래스 틀에서 찍어낸 여러 개의 객체 생성 가능
        - 객체들은 상호 별도의 공간에 생성

    class class name
    {            // 클래스 멤버끼리는 둘다 볼 수 있음
        private: // 나 자신만 볼 수 있음
        variable declaration;
        function declarations;

        public: // 밖에서도 볼 수 있음
        variable declarations;
        function declarations;
    }
*/

#include <iostream>

using namespace std;

class item
{
        int number;                     // private by default
        float cost;                     // private by default

    public:
        void getdata (int a, float b);   // prototype declaration to be defined
        // function defined inside class
        void putdata (void)
        {
            cout << "Number: " << number << endl;
            cout << "Cost : " << cost << endl;
        }
};
// Member Function Definition
void item :: getdata (int a, float b)   // use membership label
{
    number = a;                         // private variables
    cost = b;                           // directly used
}

// Main program
int main()
{
    item x;                             // create object x

    cout << "\nObject x " << endl;

    x.getdata(100, 299.95);             // call member function
    x.putdata();                        // call member function

    item y;

    cout << "\nObject y " << endl;
    y.getdata(200, 175.50);
    y.putdata();

    return 0;
}