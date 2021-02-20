#include <iostream>
#define MAX 50

using namespace std;

int n, m;
int x, y, dir;
int cnt;

        //   N  E  S  W
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int map[MAX][MAX];
bool check[MAX][MAX] = {false};;

void turn_left() {
    dir -= -1;
    if(dir == -1) {
        dir = 3;
    }
}

void go_back() {
    
}

int main(void) {
    cin >> n >> m;
    cin >> x >> y >> dir;
    map[x][y] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    while(true) {
        if(!check[x][y]) cnt++;
        check[x][y] = true;

        bool clean = true;

        for (int i = 1; i <= 4; i++) {
            int nd = (4 + dir - i) % 4;
            int nx = x + dx[nd];
            int ny = y + dy[nd];

        }

    }

    return 0;
}