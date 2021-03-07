/*
    어려우니까 나중에 다시 하쯔아
*/

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#define MAX 10

using namespace std;

int n;
char len[MAX];
// string s[MAX];
int arr[MAX];
int cnt;
int sum;
string str;
vector<int> vec;

int main()
{
    // for (int k = 0; k < 27; k++)
    // {
    //     cout << k << ": " << arr[k] << endl;
    // }
    int x;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        cnt = pow(10,(str.size()-1));
        for (int j = 0; j < str.size(); j++)
        {
            arr[str[j] - 'A'] += cnt;
            cnt /= 10;
            //cout << "j: " << j << " str[j]: " << str[j] << " cnt: " << cnt << endl;
        }
    }

    for (int i = 0; i < 27; i++)
    {
        //cout << i << ": " << arr[i] << endl;
        if(arr[i]!=0)
        {
            vec.push_back(arr[i]);
        }
    }
    sort(vec.begin(), vec.end());
    int value = 9;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        sum += vec[i]*value;
        value--;
    }
    cout << sum << endl;

    return 0;
    // len[i] = s[i].size();
    // for(int i = 0; i < n; i++)
    // {
    //     cout << i << " : " << s[i] << " len = " << s[i].size() << endl;
    //     for (int j = 0; j < s[i].size(); j++)
    //     {
    //         cout << s[i].at(j);
    //     }
    //     cout << endl;
    // }
}