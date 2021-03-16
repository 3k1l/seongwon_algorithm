#include <iostream>
#include <vector>

using namespace std;

int n;
int m;
int map[100][100];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
}