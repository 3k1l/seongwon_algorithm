#include <iostream>

using namespace std;

namespace name
{
    int age = 28;
    void print()
    {
        cout << "Seongwon Kim" << '\n';
    }
}

namespace address
{
    int age = 8000;
    void print()
    {
        cout << "Seoul, Korea" << '\n';
    }
}

void print();

int main()
{
    int age = 100000;

    cout << "Enter your name : ";
    char name[100];
    cin >> name;

    cout << "Your name : " << name << '\n';

    name::print();
    address::print();
    print();

    cout << name::age << endl;
    cout << address::age << endl;
    cout << age << endl;

    return 0;
}

void print()
{
    cout << "genius seongwon" << endl;
}