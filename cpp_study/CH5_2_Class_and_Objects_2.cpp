/*
    @ 멤버 함수의 인-라인화
    - 자동 인라인 함수 : 클래스 선언부에 구현된 멤버 함수
        - inline 으로 선언할 필요 없음
        - 컴파일러에 의해 자동으로 인라인 처리
        - 생성자를 포함, 모든 함수가 자동 인라인 함수 가능
    

*/

#include <iostream>
//#include <conio.h>
#include <string>
using namespace std;

class binary
{
    string s;

    public:
    void read(void)
    {
        cout << "Enter a binary number : ";
        cin >> s;
    }
    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "\nIncorrect binary number format... the program will quit";
                getch();
                exit();
            }
        }
    }

    void ones(void)
    {
        chk_bin();
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i) == '0')
                s.at(i) = '1';
            else
                s.at(i) = '0';
        }
    }

    void displayones(void)
    {
        ones();
        cout << "\nThe 1's compliment of the above binary number is : " << s;
    }
};

int main()
{
    binary b;
    b.read();
    b.displayones();
    getch();
    return 0;
}