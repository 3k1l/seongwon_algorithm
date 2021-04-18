#include <iostream>
#include <vector>

using namespace std;

int n;
int sum;
int triangle[501][501];
// int x;
// int dy[2] = {1, 1};
// int dx[2] = {0, 1};
// vector<int> tri[500];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> triangle[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            triangle[i][j] += max(triangle[i-1][j-1], triangle[i-1][j]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (sum < triangle[n][i])
        {
            sum = triangle[n][i];
        }
    }
    cout << sum << endl;
}

/*** dynamic method ***/

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cin >> x;
//             tri[i].push_back(x);
//         }
//     }

//     return 0;
// }