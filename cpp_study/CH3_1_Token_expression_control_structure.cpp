/*
    * Keywords
    * Indentifiers
    * Constants
    * Strings
    * Operators
    
    @ Storage Classes
        - Automatic
        - External
        - Static
        - Register

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