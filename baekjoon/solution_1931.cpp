#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 100000

using namespace std;

int meetings;
int start_t;
int end_t;
vector< pair<int, int > > schedule;

int main()
{
    cin >> meetings;

    for (int i = 0; i < meetings; i++)
    {
        cin >> start_t >> end_t;
        schedule.push_back(pair<int, int>(start_t, end_t));
    }
    // for (int i = 0; i <meetings; i++)
    // {
    //     cout << i << " : " << schedule[i].first << " : " << schedule[i].second << endl;
    // }
}