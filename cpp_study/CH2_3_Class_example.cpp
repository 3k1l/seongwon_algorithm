#include <iostream>
using namespace std;
class person
{
    char name[50];
    int age;

    public:
        void getdata(void);
        void display(void);
};
void person::getdata(void)
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enger age : ";
    cin >> age;
}
void person::display(void)
{
    cout << "\r\nName : " << name;
    cout << "\r\nAge : " << age;
}
int main()
{
    person p;
    p.getdata();
    p.display();

    return 0;
}