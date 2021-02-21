#include <iostream>
#include <vector>

#define MAX 100

using namespace std;

int n, m, k;
int x1, x2, y1, y2;
int map[MAX][MAX];
int rectangle[MAX][MAX];

int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> rectangle[i][j];
        }
        x1 = rectangle[i][0];
        y1 = rectangle[i][1];
        x2 = rectangle[i][2];
        y2 = rectangle[i][3];

        
    }


    
}