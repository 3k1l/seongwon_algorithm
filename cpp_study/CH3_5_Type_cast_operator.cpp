/*
    Type Cast Operator

    (type-name) expression      // C notation
    type-name (expression)      // C++ notation

    ex)
    Average = sum/(float) i;    // C notation
    Average = sum/float (i);    // C++ notation

    p = int * (q);              // illegal
    p = (int *) q;
*/

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int intvar = 25;
    float floatvar = 35.87;

    cout << "\r\nintvar       : " << intvar;
    cout << "\r\nfloatvar     : " << floatvar;
    cout << "\r\nfloat(intvar): " << float(intvar);
    cout << "\r\nint(floatvar): " << int(floatvar);

    return 0;
}