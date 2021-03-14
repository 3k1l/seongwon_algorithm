#include <iostream>

using namespace std;

int n;
int dp[1000];
int result;

int main()
{
    result = 0;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    if(n <= 2)
        cout << dp[n] << endl;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
    }
    result = dp[n] % 10007;
    cout << result << endl;
    // for (int j = 0; j <= n; j++)
    // {
    //     cout << j << " : " << dp[j] << endl;
    // }

}
/*
1 = 1   |
2 = 2   ||  #  =
3 = 3   ||| #  |=  # =|
4 = 5   ||||#  ||= # |=| # =||  # ==
5 = 8   |||||1  |||=4   |==3
6 = 13
7 = 21
8 = 34
9 = 55
*/