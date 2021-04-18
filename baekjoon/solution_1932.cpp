#include <iostream>
#include <vector>

using namespace std;

int n;
int x;
int sum;
int dy[2] = {1, 1};
int dx[2] = {0, 1};
bool visit[500][500];
vector<int> tri[500];

void dfs(int x, int y)
{
    visit[x][y] = true;
    sum += tri[x][y];

    for(int i = 0; i < 2; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if((nx < n) & (ny < n))
        {
            cout << "sum : " << sum;
            cout << "nx : " << nx << " ny : " << ny << endl;
            dfs(nx,ny);
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> x;
            tri[i].push_back(x);
        }
    }
    dfs(0,0);
    cout << "final sum : " << sum << endl;

    return 0;
}