#include <iostream>

using namespace std;

int n;
int m;
int r;
int sugar;
int cointypes[2] = {5, 3};

int main() {
  cin >> n;
  m = n / cointypes[0];  // maximum value of 5kg
  while(m >= 0) {
    sugar = 0;
    //cout << "m : " << m << endl;
    if (m > 0) {
      r = n - m * cointypes[0];
      //cout << "r : " << r << endl;
      sugar = m;
      //cout << "sugar : " << sugar << endl;
    }
    else {
      r = n;
      //cout << "r : " << r << endl;
    }

    if (r % cointypes[1] == 0) {
      sugar += r/cointypes[1];
      //cout << "sugar : " << sugar << endl;
      break;
    }
    m--;
    if(m < 0) {
      sugar = -1;
    }
  }
  cout << sugar << endl;
}