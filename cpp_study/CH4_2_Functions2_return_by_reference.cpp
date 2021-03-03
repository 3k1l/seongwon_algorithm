/*
    @Return by Reference

        - C언어의 함수 리턴
            : 함수는 반드시 값만 리턴
        - C++의 함수 리턴
            : 함수는 값 외에 참조 리턴 가능
*/

#include <iostream>
using namespace std;

char& find(char s[], int index) {
    return s[index];    // return by reference
}

int main() {
    char name[] = "Mike";
    cout << name << endl;       // Mike

    find(name,0) = 'S'; // change name[0]='S'
    cout << name << endl;       // Sike

    char& ref = find(name,2);
    ref = 't';          // ref는 name[2] 참조
    cout << name << endl;       // Site
}