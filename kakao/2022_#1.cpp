#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<pair<string, string> > report_p;
    vector<vector <string> > split;


    /* 중복제거 */
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());

    //for (int i = 0; i < id_list.size(); i++) {
        // for (int j = 0; j < report.size(); j++) {
        //     //cout << id_list[i] << " : " << report_p[j].first << "," << report_p[j].second << endl;
        //     cout << report[j] << endl;
        // }
    //}
    
    /* report pair */
    for (int i = 0; i < report.size(); i++) {
        istringstream str(report[i]);
        cout << endl << i << " " << report[i] << " | ";
        string strBuff;
        while(getline(str, strBuff, ' ')) {
            cout << strBuff << " ";
            split[i].push_back(strBuff);
        }
        cout << split[i] << endl;
        //report_p.push_back(pair<string, string>(split[i].front(), split[i].back()));
        //cout << i << " " << split.front() << "," << split.back() << endl;
    }

    /* 신고당한 횟수 = report_cnt */
    vector<int> report_cnt;
    int cnt;
    for (int i = 0; i < id_list.size(); i++) {
        cnt = 0;
        for (int j = 0; j < report_p.size(); j++) {
            if(id_list[i] == report_p[j].second) {
                cnt++;
            }
        }
        report_cnt.push_back(cnt);
    }
    
    /* 정지여부 = ban_result */
    vector<bool> ban_result;
    bool result;
    for (int i = 0; i < report_cnt.size(); i++) {
        if(k <= report_cnt[i]) {
            result = true;
        }
        else {
            result = false;
        }
        ban_result.push_back(result);
    }
    
    /* receive mail count = answer*/
    int mail_cnt;
    int index;
    vector<string>::iterator it;
    for (int i = 0; i < id_list.size(); i++) {
        mail_cnt = 0;
        for (int j = 0; j < report_p.size(); j++) {
            //cout << id_list[i] << " : " << report_p[j].first << "," << report_p[j].second << endl;
            if(id_list[i] == report_p[j].first) {
                it = find(id_list.begin(), id_list.end(), report_p[j].second);
                index = distance(id_list.begin(), it);
                //cout << "i:" << id_list[i] << " j:" << id_list[j] << " index:" << index << endl;
                if( true ==  ban_result[index]) {
                    mail_cnt++;
                }
            }
        }
        answer.push_back(mail_cnt);
    }
    
    return answer;
}

int main () {
    vector<string> a;
    vector<string> b;
    a.push_back("muzi");
    a.push_back("frodo");
    a.push_back("apeach");
    a.push_back("neo");
    b.push_back("muzi frodo");
    b.push_back("apeach frodo");
    b.push_back("frodo neo");
    b.push_back("muzi neo");
    b.push_back("apeach muzi");
    int c = 2;

    solution(a, b, c);

    return 0;
}