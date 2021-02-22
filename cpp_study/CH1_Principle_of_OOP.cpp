/*
절차적 프로그래밍 : 함수를 중심으로 프로그램을 설계한 후 함수에 필요한 데이터를 정의한다.
객체지향 프로그래밍 : 객체를 가지고 객체 간의 상호작용으로 인해 프로그램이 수행되는 언어를 의미한다.
    - Class : 객체(object)를 만드는 틀
    - Object : 클래스라는 틀에서 생겨난 실체
    - 객채지향 언어의 3가지 특성
        1. Encapsulation(캡슐화) : 데이터와 데이터의 행동 양식을 결정하는 코드를 묶는 구조
        2. Polymorphism(다형성) : 목적은 다르지만 연관성이 있는 두 가지 이상의 용도로 하나의 이름을 사용할 수 있게 하는 성질
        3. Inheritance(상속성) : 하나의 객체가 다른 객체의 특성을 이어 받을 수 있게 해주는 특성

    - Overloading
        1. Function overloading : 함수명은 동일하지만 매개변수의 자료형이나 개수를 서로 다르게 주어 함수명을 여러 번 정의.
        2. Operator overloading : 이미 사용중인 연산자를 다른 용도로 다시 정의해서 사용하는 것.
*/

/***** Inheritance example *****/
class Phone {
    void call();
    void receive();
};

class MobilePhone : public Phone {
    void connectWireless();
    void recharge();
};

class MusicPhone : public MobilePhone {
    void downloadMusic();
    void play();
};