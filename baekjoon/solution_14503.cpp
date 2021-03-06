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
bool check[MAX][MAX] = {false};

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
        if(false == check[x][y]) {
            cnt++;                  // 1. clean
        }
        check[x][y] = true;         // true : clean / false : not yet

        bool fclean = true;

        // 2. explorer 4 direction
        for (int i = 1; i <= 4; i++) {
            int nd = (4 + dir - i) % 4;
            int nx = x + dx[nd];
            int ny = y + dy[nd];

            if (true == check[nx][ny]) continue;    // 2_b : already cleaned
            if (1 == map[nx][ny]) continue; // 2_b : wall
            // 2_a : turn left and go 1 block
            fclean = false;
            x = nx;
            y = ny;
            dir = nd;
            break;
        }

        if (true == fclean) {
            // 2_c
            int nx = x + dx[(2 + dir) % 4];
            int ny = y + dy[(2 + dir) % 4];
            // 2_d : finish
            if(map[nx][ny] == 1) break;
            else {
                x = nx;
                y = ny;
            }
        }
    }
    cout << cnt;
    return 0;
}