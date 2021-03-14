#include <iostream>

using namespace std;

int n;
int cnt;

int main()
{
    while(true){
    cin >> n;
    cnt = 0;

    while (n != 1)
    {
        if(n%3 == 0)
        {
            n /= 3;
            cnt ++;
            cout << "n : " << n << ", cnt : " << cnt << endl;
            if(1 == n)
                break;
        }
        else if(n%2 == 0)
        {
            if( (n-1) >= 3)
            {
                n -= 1;
                cnt ++;
                cout << "n : " << n << ", cnt : " << cnt << endl;
                continue;
            }
            n /= 2;
            cnt ++;
            cout << "n : " << n << ", cnt : " << cnt << endl;
            if(1 == n)
                break;
        }
        else
        {
            n -= 1;
            cnt ++;
            cout << "n : " << n << ", cnt : " << cnt << endl;
            if(1 == n)
                break;
        }
    }
    cout << "out : " << cnt << endl;}
}