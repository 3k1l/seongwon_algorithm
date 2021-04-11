#include <iostream>

using namespace std;

int n;
int T[16];
int P[16];
int dp[16];

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> T[i] >> P[i];
    }

    for (int i = n; i >= 1; i--)
    {
        if(i + T[i] - 1 > n)
        {
            dp[i] = dp[i+1];
            continue;
        }
        dp[i] = max(dp[i + T[i]] + P[i], dp[i+1]);
    }
    cout << dp[1] << endl;

    return 0;
}