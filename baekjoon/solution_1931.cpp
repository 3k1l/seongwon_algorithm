#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 100000

using namespace std;

int meetings;
int start_t;
int end_t;
int cnt;
vector< pair<int, int > > schedule;

int main()
{
    cin >> meetings;

    for (int i = 0; i < meetings; i++)
    {
        cin >> start_t >> end_t;
        schedule.push_back(pair<int, int>(start_t, end_t));
    }
    sort(schedule.begin(), schedule.end());
    for (int i = 0; i <meetings; i++)
    {
        cout << i << " : " << schedule[i].first << " : " << schedule[i].second << endl;
    }
    for (int i = (meetings-1); i >= 0; i--)
    {
        if(schedule[i-1].first >= schedule[i].second)
        {
            cnt++;
            if(i == (meetings-1))
            {
                cnt--;
            }
        }
        if(schedule[i-1].first < schedule[i].first)
        {

        }
    }
}