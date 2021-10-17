#include <iostream>
#include <vector>

using namespace std;

int n;
int k;
int dur;
int step;
bool loc[101];
vector<int> a;

void move_belt(void)
{
    int temp;

    temp = a.back();
    for(int i = n*2-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;

    for(int i = n-1; i > 0; i--)
    {
        loc[i] = loc[i-1];
    }
    loc[0] = false;
}

void move_robot(void)
{
    for(int i = n-1; i > 0; i--)
    {
        if((a[i] >= 1) && (loc[i-1] == true) && (loc[i] != true))
        {

            loc[i] = loc[i-1];
            a[i]--;
            loc[i-1] = false;
        }
    }
}

void pickup(void)
{
    if(a[0] >= 1)
    {
        a[0]--;
        loc[0] = true;
    }
}

bool zero_check(void)
{
    int cnt = 0;
    bool result = false;

    for(int i = 0; i < n*2; i++)
    {
        if(a[i] == 0)
        {
            cnt++;
        }
    }
    if(cnt >= k)
    {
        result = true; 
    }
    return result;
}

void getoff_robot(void)
{
    if(true == loc[n-1])
    {
        loc[n-1] = false;
    }
}

int main(void)
{
    cin >> n >> k;

    for(int i = 0; i < n*2; i++)
    {
        cin >> dur;
        a.push_back(dur);
    }
    
    while(false == zero_check())
    {
        step++;
        move_belt();
        getoff_robot();
        move_robot();
        getoff_robot();
        pickup();
        getoff_robot();
    }
    cout << step << endl;
    return 0;
}