#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int step = 0;

string solution(string new_id) {

    /* Step 1 */
    for (int i = 0; i < new_id.size(); i++) {
        new_id[i] = tolower(new_id[i]);
    }
    /* Step 2 */
    for (int i = 33; i < 128; i++) {
        if ((48 <= i && i <= 57) || (65 <= i && i <= 90) || (97 <= i && i <= 122) || (45 == i) || (46 == i) || (95 == i)) {
            continue;
        }
        new_id.erase(remove(new_id.begin(), new_id.end(), i), new_id.end());
    }
    /* Step 3 */
    while(new_id.find("..") != string::npos) {
        new_id.replace(new_id.find(".."), 2, ".");
    }
    /* Step 4 */
    if(new_id.find(".") == 0) {
        new_id.erase(0,1);
    }
    if(new_id.find(".", new_id.length()-1) == new_id.length()-1) {
        new_id.pop_back();
    }
    /* Step 5 */
    if(new_id.empty() == true) {
        new_id = "a";
    }
    /* Step 6 */
    while(new_id.length() >= 16) {
        new_id.pop_back();
        if(new_id.find(".", new_id.length()-1) == new_id.length()-1) {
            new_id.pop_back();
        }
    }
    /* Step 7 */
    while(new_id.length() <= 2) {
        new_id += new_id.back();
    }

    string answer = new_id;
    return answer;
}

int main() {
    cout << solution("...!@BaT#*..y.abcdefghijklm") << endl;    // "bat.y.abcdefghi"
    cout << solution("z-+.^.") << endl;                         // "z--"
    cout << solution("=.=") << endl;                            // "aaa"
    cout << solution("123_.def") << endl;                       // "123_.def"
    cout << solution("abcdefghijklmn.p") << endl;               // "abcdefghijklmn"
}