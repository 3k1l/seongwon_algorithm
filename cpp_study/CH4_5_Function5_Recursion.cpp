/*
    @Recursion
    - function calls itself meaning, one of the statements in the function 
    definition makes a call to the same function in which it is present.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

long fact (int n)
{
    if (n == 1)
        return 1;
    return (n * fact(n-1));
}

void TOH(int d, char tower1, char tower2, char tower3)
{
    if (d == 1)
    {
        cout << "\nShift top disk from tower " << tower1 << "to tower " << tower2;
    }
    TOH(d-1, tower1, tower3, tower2);   // recursive funcion call
    cout << "\nShift top disk from tower " << tower1 << "to tower " << tower2;
    TOH(d-1, tower3, tower2, tower1);   // recursive funcion call
}
int main()
{
    int f;

    cout << "Select function (1 or 2) : ";
    cin >> f;

    if (1 == f)
    {
        int num;
        cout << "Enter a positive integer: ";
        cin >> num;

        cout << "Factorial of " << num << " is " << fact(num);
    }
    else if (2 == f)
    {
        int disk;
        cout << "Enter the number of disks: ";
        cin >> disk;

        if (disk < 1)
            cout << "\nThere are no disks to shift";
        else
            cout << "\nThere are " << disk << " disk is tower 1\n";

        TOH(disk,'1','2','3');
        cout << "\n\n" << disk << " disks in tower 1 are shifted to tower 2";
    }

    getchar();
    return 0;
}