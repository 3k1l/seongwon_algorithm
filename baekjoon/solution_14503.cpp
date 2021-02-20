#include <iostream>
using namespace std;

int n, m;
int x, y, dir;

        //   N  E  S  W
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int position[50][50];
int map[50][50];

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
    position[x][y] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    return 0;
}