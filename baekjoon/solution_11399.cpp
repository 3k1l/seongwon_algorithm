#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int total;
int wait[1000];
vector<int> arr;

int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i++) {
    if(0 == i) {
      wait[0] = arr[0];
    }
    else {
      wait[i] += wait[i-1] + arr[i];
    }
    total += wait[i];
  }
  cout << total << endl;
  return 0;
}