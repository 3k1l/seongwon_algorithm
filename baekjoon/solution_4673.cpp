#include <iostream>
using namespace std;

int n;
int x, y, z, w;
bool self_num[10001];
int d(int n)
{
    int gen;
    x = n/1000;
    y = (n-(x*1000))/100;
    z = (n-(x*1000+y*100))/10;
    w = (n-(x*1000+y*100+z*10));
    gen = n + x + y + z + w;
    self_num[gen] = true;
    return gen;
}
int main()
{
    for(int i = 1; i < 10000; i++)
    {
        d(i);
    }
    for(int i = 1; i < 10000; i++)
    {
        if(false == self_num[i])
        {
            cout << i << endl;
        }
    }
}