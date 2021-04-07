#include <iostream>
#include <vector>

using namespace std;

int n;
int t;
int dp[11];
vector<int> v;

int main()
{
    cin >> t;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    for (int i = 0; i < t; i++)
    {
        if(v[i] <= 3)
            cout << dp[v[i]] << endl;
        else
        {
            for (int j = 4; j <= v[i]; j++)
            {
                dp[j] = dp[j-3] + dp[j-2] + dp[j-1];
            }
            cout << dp[v[i]] << endl;
        }
    }
}
/*
1   1
2   2
3   4
4   7
5   13
6   24
7   44
8   81
9   149
10  274
*/