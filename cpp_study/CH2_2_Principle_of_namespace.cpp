/*
    namespace 키워드
    - 이름 충돌 해결 : 개발자가 자신만의 이름 공간을 생성할 수 있도록 함

    std:: 생략
    - using 지시어 사용

    using std::cout;                // cout에 대해서만 std:: 생략
    cout << "Hello" << std::endl;   // std::cout에서 std:: 생략

    using namespace std;            // std 이름 공간에 선언된 모든 이름의 std:: 생략
    cout << "Hello" << endl;        // std:: 생략

    * cin의 특징
        - 입력 버퍼를 내장하고 있음
        - Enter가 입력될 때까지 입력된 키를 입력 버퍼에 저장
        - 버퍼에 입력을 저장해 뒀다가 엔터를 치면 버퍼에 쌓여있는 데이터를 변수에 전달
    * c++의 변수 선언
        - 변수 선언은 아무 곳이나 가능

    * 공백이 낀 문자열 받는 방법
        - cin.getline(char buf[], int size, char delimitChar)
        - buf에 최대 size-1개의 문자 입력, 끝에 '\0' 붙임
        - delimitChar를 만나면 입력 중단. 끝에 '\0' 붙임(default값은 Enter key)
        ex) char address[100];
            cin.getline(address, 100, '\n');

*/