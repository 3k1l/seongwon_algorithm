#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 100

using namespace std;

int M,N,k;
int cnt;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int map[MAX][MAX];
bool visit[MAX][MAX];
vector<int> result;

void dfs(int x, int y) {
    visit[x][y] = true;
    cnt ++;

    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(0 <= nx && nx < M && 0 <= ny && ny < N){
            if((map[nx][ny] == 0) && !visit[nx][ny]) {
                dfs(nx,ny);
            }
        }

    }
}

int main() {
    cin >> M >> N >> k;

    int x1, x2, y1, y2;

    for (int i = 0; i < k; i++) {
        cin >> y1 >> x1 >> y2 >> x2;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                map[x][y] = 1;
            }
        }
    }

    cout << endl;
    for (int x = 0; x < M; x++) {
        for (int y = 0; y < N; y++) {
            cout << map[x][y] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    for (int x = 0; x < M; x++) {
        for (int y = 0; y < N; y++) {
            if (map[x][y] == 0 && !visit[x][y]) {
                cnt = 0;
                dfs(x,y);
                result.push_back(cnt);
            }
        }
    }

    cout << result.size() << endl;

    sort(result.begin(), result.end());

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << ' ';
    }
    
    return 0;
}