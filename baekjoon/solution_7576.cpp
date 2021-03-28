#include <iostream>
#include <vector>
#include <queue>

#define MAX 1000

using namespace std;

int m, n;
int x;
int cnt;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1 ,1};

vector<int> tomato_box[MAX];

void bfs(int x, int y) {
    queue<pair<int, int > > q;
    q.push(make_pair(x,y));

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(tomato_box[nx][ny] == 0) {
            tomato_box[nx][ny] = 1;
            cnt++;
            q.push(make_pair(nx,ny));
        }


    }
}



int main() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            tomato_box[i].push_back(x);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(tomato_box[i][j] == 1) {
                bfs(i,j);
            }
        }
    }
    cout << "cnt : " << cnt << endl;

} 

