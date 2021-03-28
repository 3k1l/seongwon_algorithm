#include <iostream>
using namespace std;
int n;
int x, y, z;
int cd1, cd2;
int cnt;

int main()
{
    cin >> n;

    if (n < 100)
    {
        cout << n << endl;
    }
    else
    {
        for(int i = 100; i <= n; i++)
        {
            x = i / 100;
            y = (i - x*100) / 10;
            z = i - (x*100) - (y*10);

            cd1 = x - y;
            cd2 = y - z;

            if (cd1 == cd2)
            {
                cnt++;
            }
        }
        cout << 99+cnt << endl;
    }
    

}