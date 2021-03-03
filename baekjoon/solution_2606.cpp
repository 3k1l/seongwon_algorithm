#include <iostream>
#include <vector>
#define MAX 100

using namespace std;

int n;
int node, neighbor_node;
int computer_number;
int cnt;
bool visited[MAX];
vector<int> graph[MAX];

void dfs(int x) {
    visited[x] = true;
    cnt++;
    //cout << "x = " << x << " cnt = " << cnt << endl;

    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y]) {
            dfs(y);
        }
    }
}

int main() {
    cin >> computer_number;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> node >> neighbor_node;
        graph[node].push_back(neighbor_node);
    }

    dfs(1);
    cnt -= 1;
    cout << cnt << endl;
}