#include <iostream>
#include <vector>

using namespace std;

int n;
int x, y;
vector<pair<int, int> > body;
vector<int> list;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        body.push_back(make_pair(x,y));
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << body[i].first << body[i].second << " ";
    // }

    for (int i = 0; i < n; i++)
    {
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if( i != j )
            {
                if( body[i].first < body[j].first  && body[i].second < body[j].second )
                {
                    rank++;
                }
            }
        }
        list.push_back(rank);
    }

    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }
}