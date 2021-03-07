#include <iostream>
#define MAX 100000

using namespace std;

int meetings;
int schedule[MAX][3];
int start_t;
int end_t;

int main()
{
    cin >> meetings;

    for (int i = 0; i < meetings; i++)
    {
        cin >> start_t >> end_t;
        schedule[i][0] = start_t;
        schedule[i][1] = end_t;
        schedule[i][2] = end_t - start_t + 1;
    }

    

    // for (int i = 0; i < meetings; i++)
    // {
    //     cout << i << " : " << schedule[i][0] << " " << schedule[i][1] << " " << schedule[i][2] << endl;
    // }


}