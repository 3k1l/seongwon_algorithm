#include <iostream>

using namespace std;

int n;
int t;
int dp[10];

int main()
{
    cin >> t;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        if(n <= 3)
            cout << dp[n] << endl;
        else
        {
            for (int j = 4; j <= n; j++)
            {
                dp[j] = dp[j-3] + dp[j-2] + dp[j-1];
            }
            cout << dp[n] << endl;
        }
    }

}