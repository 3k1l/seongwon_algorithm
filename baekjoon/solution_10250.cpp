#include <iostream>
using namespace std;

int t;
int h, w, n;
int room;

int main(void) {
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> h >> w >> n;
    if (n == h) {
      room = n*100 + 1;
    }
    else {
      room = (n%h)*100 + n/h + 1;
    }

    cout << room << endl;
  }

  return 0;
}