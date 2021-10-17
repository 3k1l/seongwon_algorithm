#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int W;
int N;
int M;
int P;

vector<pair<int, int> > gem;

int main(int argc, char** argv)
{
        cin >> W >> N;

        for(int i = 0; i < N; i++)
        {
                cin >> M >> P;
                gem.push_back(pair<int, int>(M, P));
        }
        for(int i = 0; i < N; i++)
        {
            cout << gem[i].first << " " << gem[i].second << endl;
        }

        sort(gem.begin(), gem.end());
        
        for(int i = 0; i < N; i++)
        {
            cout << gem[i].first << " " << gem[i].second << endl;
        }


        return 0;
}