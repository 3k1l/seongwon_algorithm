#include <iostream>
#include <vector>
using namespace std;

int t;
int m;
int n;
int k;
int x;
int y;
int check;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool map[51][51];
bool visited[51][51];

vector<int> result;

void dfs(int x, int y)
{
    visited[x][y] = true;
    // if(true == map[x][y])
    // {
    //     // cout << "x:" << x << " y:" << y << " cnt:" << cnt << endl;
    // }

    for(int i=0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if((0 <= nx) & (nx < m) & (0 <= ny) & (ny < n))
        {
            if((true == map[nx][ny]) & (false == visited[nx][ny]))
            {
                dfs(nx,ny);
            }
        }
    }
}

int main(void)
{
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> m >> n >> k;
        for (int j=0; j<k; j++)
        {
            cin >> x >> y;
            map[x][y] = true;    
        }

        // for (int k=0; k<m; k++)
        // {
        //     for(int l=0; l<n; l++)
        //     {
        //         cout << map[k][l] << ' ';
        //     }
        //     cout << endl;
        // }

        for(int a=0; a<m; a++)
        {
            for(int b=0; b<n; b++)
            {
                if((true == map[a][b]) & (false == visited[a][b]))
                {
                    check++;
                    dfs(a,b);
                }
            }
        }
        result.push_back(check);
        check = 0;
    }

    for(int i = 0; i<result.size(); i++)
    {
        cout << result[i] << endl;
    }
}