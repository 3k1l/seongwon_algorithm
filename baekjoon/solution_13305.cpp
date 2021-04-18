#include <iostream>
#include <vector>

using namespace std;

long long n;
long long total_dist;
long long total_price;
long long min_price;
vector<long long> dist;
vector<long long> price;

int main(void) {
  cin >> n;
  for (int i = 0; i < n-1; i++) {
    long long x;
    cin >> x;
    dist.push_back(x);
    total_dist += dist[i];
  }
  for (int j = 0; j < n; j++) {
    long long y;
    cin >> y;
    price.push_back(y);
  }

  // absolutely
  total_price += price[0] * dist[0];
  total_dist -= dist[0];
  min_price = price[0];

  for(int i = 1; i < n-1; i++) {
    if(total_dist <= 0) break;
    if(price[i] < min_price) min_price = price[i];
    total_price += min_price * dist[i];
    total_dist -= dist[i];
  }
  cout << total_price << endl;
  return 0;
}