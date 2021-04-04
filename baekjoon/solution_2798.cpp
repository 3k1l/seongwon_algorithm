#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n;
int m;
int x;
vector<int> card;
vector<int> sum;

int main ()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++ )
    {
        cin >> x;
        card.push_back(x);
    }

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                sum.push_back(card[i]+card[j]+card[k]);
                //cout << i << " " << j << " " << k << " " << card[i]+card[j]+card[k] << endl;
            }
        }
    }

    // for (int i = 0; i < sum.size(); i++)
    // {
    //     cout << sum[i] << endl;
    // }

    sort(sum.begin(), sum.end());

    for (int i = sum.size()-1; i > 0; i--)
    {
        if(sum[i] <= m)
        {
            cout << sum[i] << endl;
            break;
        }
    }

}