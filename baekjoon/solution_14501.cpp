#include <iostream>
#include <vector>

using namespace std;

int n;
int t, p;
vector<pair<int, int> > counsel;

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> p;
        counsel.push_back(make_pair(t,p));
    }

    for (int i = 0; i < n; i++)
    {
        cout << counsel[i].first << " " << counsel[i].second << endl;
    }
}