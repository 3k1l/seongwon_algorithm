#include <iostream>
#include <algorithm>
#define MAX 1000000

using namespace std;


int t;
int applicant;
int pass;
int comparison;
pair<int, int > score[MAX];

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> applicant;
        for (int j = 0; j < applicant; j++)
        {
            cin >> score[j].first >> score[j].second;
        }

        sort(score, score + applicant);

        // for (int j = 0; j <applicant; j++)
        // {
        //     cout << j << " : " << score[j].first << " " << score[j].second << endl;
        // }

        pass = 1;
        comparison = score[0].second;
        for (int j = 1; j < applicant; j++)
        {
            if(comparison > score[j].second)
            {
                pass++;
                comparison = score[j].second;
            }
            if(comparison == 1)
                break;
        }
        cout << pass << endl;
    }
}