#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int dp_r[1001];
int dp_g[1001];
int dp_b[1001];
vector<int> R;
vector<int> G;
vector<int> B;

int min_3(int x, int y, int z)
{
    if(x >= y)
    {
        if(y >= z)
            return z;
        else
            return y;
    }
    else
    {
        if(x >= z)
            return z;
        else
            return x;
    }
}
int main()
{
    cin >> n;
    int price_R, price_G, price_B;
    for(int i = 0; i < n; i++)
    {
        cin >> price_R >> price_G >> price_B;
        R.push_back(price_R);
        G.push_back(price_G);
        B.push_back(price_B);
    }
    //dp[1] = min_3(min(R[0]+G[1], R[0]+B[1]), min(G[0]+R[1], G[0]+B[1]), min(B[0]+R[1], B[0]+G[1]));
    dp_r[1] = min(G[0]+R[1], B[0]+R[1]);
    dp_g[1] = min(R[0]+G[1], B[0]+G[1]);
    dp_b[1] = min(R[0]+B[1], G[0]+B[1]);
    for(int i = 1; i < n; i++)
    {
        dp_r[i+1] = min(dp_g[i]+R[i+1], dp_b[i]+R[i+1]);
        dp_g[i+1] = min(dp_r[i]+G[i+1], dp_b[i]+G[i+1]);
        dp_b[i+1] = min(dp_r[i]+B[i+1], dp_g[i]+B[i+1]);
    }

    cout << min_3(dp_r[n-1], dp_g[n-1], dp_b[n-1]) << endl;
}