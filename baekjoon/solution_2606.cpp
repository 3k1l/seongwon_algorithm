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

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < graph[i].size(); j++) {
            if(!visited[i]) {
                dfs(i);
            }
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

    dfs(4);
    cout << cnt << endl;
}