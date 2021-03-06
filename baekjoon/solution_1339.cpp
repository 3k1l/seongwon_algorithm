#include <iostream>
#include <string>

#define MAX 10

using namespace std;

int n;
string s[MAX];
int main() {
    int x;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << i << " : " << s[i] << " len = " << s[i].size() << endl;
        for (int j = 0; j < s[i].size(); j++)
        {
            cout << s[i].at(j);
        }
        cout << endl;
    }
}