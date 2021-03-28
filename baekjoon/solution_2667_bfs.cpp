#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define MAX 25

using namespace std;

int n;
int cnt;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int nx, ny;
int map[MAX][MAX];
bool visit[MAX][MAX];

vector<int> result;

void bfs(int x, int y){
    queue<pair<int, int > > q;
    q.push(make_pair(x,y));

    visit[x][y] = true;
    cnt++;

    cout << "cnt : " << cnt << " [x = " << x << ", y = " << y << "]" << endl;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if ((0 <= nx) && (nx < n) && (0 <= ny) && (ny < n)) {
                if (map[nx][ny] == 1 && !visit[nx][ny]) {
                    cnt++;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
/*
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
                cout << map[i][j];
            }
            cout << endl;
    }
    cout << endl;
*/
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(map[i][j] == 1 && !visit[i][j]) {
                cnt = 0;
                bfs(i,j);
                result.push_back(cnt);

                // cout << endl;
                // for (int i = 0; i < n; i++) {
                //     for (int j = 0; j < n; j++) {
                //             cout << visit[i][j];
                //         }
                //         cout << endl;
                // }
                // cout << endl;
            }
        }
    }

    cout << result.size() << endl;
    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
}