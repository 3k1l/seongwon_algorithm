#include <iostream>
#include <cstring>
using namespace std;

struct sample
{
    int data1;
    char data2;
};

void display(int data1, char data2)
{
    cout << "Data1 = " << data1 << endl;
    cout << "Data2 = " << data2 << endl;
}

int main()
{
    struct sample * s_ptr;
    s_ptr = new struct sample;

    if(s_ptr == NULL)
    {
        cout << "Bad Allocation occurred... the program will terminiate now..";
        return 1;
    }

    s_ptr->data1 = 25;
    s_ptr->data2 = 'A';
    display(s_ptr->data1, s_ptr->data2);

    delete s_ptr;

    return 0;
}