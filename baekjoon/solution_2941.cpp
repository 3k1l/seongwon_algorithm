#include <iostream>
#include <string>

using namespace std;

string str;
string croatia_alphabet[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
char len[8] = {2, 2, 3, 2, 2, 2, 2, 2};
bool checker(string str)
{
    bool bcheck = false;
    for(int i = 0; i < sizeof(croatia_alphabet) / sizeof(croatia_alphabet[0]); i++)
    {
        if(str.find(croatia_alphabet[i]) != string::npos)
        {
            str.replace(str.find(croatia_alphabet[i]), len[i], "0");
            // cout << str << endl;
            bcheck = true;
        }
    }
    if(false == bcheck)
    {
        cout << str.length() << endl;
        return 0;
    }
    checker(str);
}

int main()
{
    cin >> str;
    checker(str);

    return 0;

    // if(str.find(croatia_alphabet[0]) != string::npos)
    // {
    //     cout << str.find(croatia_alphabet[0]) << endl;
    //     str.replace(str.find(croatia_alphabet[0]), 2, "0");
    //     cout << str << endl;
    // }
}