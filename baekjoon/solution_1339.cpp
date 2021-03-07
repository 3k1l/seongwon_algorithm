/*
    이상한 쓰레기값이 자꾸 저장됨
*/

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

#define MAX 10
#define LIMIT_VALUE 100000000

using namespace std;

long long n;
long long arr[MAX];
long long cnt;
long long sum;
string str;
vector<long long> vec;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str;
        cnt = pow(10,(str.size()-1));
        for (int j = 0; j < str.size(); j++)
        {
            arr[str[j] - 'A'] += cnt;
            //cout << "j: " << j << " str[j]: " << str[j] << " cnt: " << cnt << " delete A : " << str[j] - 'A' << endl;
            cnt /= 10;
        }
    }

    for (int i = 0; i < 27; i++)
    {
        if( (arr[i]!=0) && (arr[i] <= LIMIT_VALUE))
        {
            vec.push_back(arr[i]);
        }
        //cout << i << ": " << arr[i] << endl;
    }
    // for (int i = 0 ; i < vec.size(); i++)
    // {
    //     cout << i << " : " << vec[i] << endl;
    // }

    sort(vec.begin(), vec.end());
    int value = 9;
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        sum += vec[i]*value;
        value--;
    }
    cout << sum << endl;

    return 0;
}