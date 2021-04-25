#include <iostream>
#include <string>

using namespace std;

int n;
int cnt;
int pre_index;
int cur_index;
bool chk;
string voca[101];

int main()
{
    cin >> n;
    cnt = n;
    for (int i = 0; i < n; i++)
    {
        cin >> voca[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < voca[i].length(); j++)
        {
            cur_index = voca[i].find(voca[i].substr(j,1));
            if(pre_index != cur_index)
            {
                if(pre_index > cur_index)
                {
                    if(false == chk)
                    {
                        cnt--;
                        chk = true;
                    }
                    // cout << "cnt--" << endl;
                }
                pre_index = cur_index;
            }
            // cout << "i : " << i << " j : " << j << " pre_index : " << pre_index << " cur_index : " << cur_index << endl;
        }
        pre_index = 0;
        chk = false;
    }
    cout << cnt << endl;
}