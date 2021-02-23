#include <iostream>                             // include header file

using namespace std;

double area(int r);

double area(int r) {
    return 3.14*r*r;
}
int main()
{
    //cout << "C++ is better than C." << endl;    // C++ statement

    float number1, number2, sum, average;
    int r;
    cout << "Enter number1 : ";
    cin >> number1;
    cout << "Enter number2 : ";
    cin >> number2;

    sum = number1 + number2;
    average = sum/2;

    cout << "Sum =" << sum << endl;
    cout << "Average =" << average << endl;

    cout << "Enter radius : ";
    cin >> r;
    cout << "area is " << area(r) << '\n';

    return 0;                                   // End of example
}