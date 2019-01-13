#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    vector<string> a(4);
    vector<string> str(7);
    vector<char> res1; // 前两个字符串得到的结果
    int c; // 后两个字符串得到的结果
    str = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    //a = {"3485djDkxh4hhGE", "2984akDfkkkkggEdsb", "s&hgsfdk", "d&Hyscvnm"};
    // 前面两对找到相同大写字符，后面两对找到相同英文字符出现的位置
    for(int i = 0; i < a[1].size(); i++) {
        if(res1.size() <= 1) {
            if(a[0][i] >= 'A' && a[0][i] <= 'Z') {
                for(int j = 0; j < a[1].size(); j++) {
                    if(a[1][j] == a[0][i]) {
                        res1.push_back(a[0][i]);
                    }
                }
            }
        } else {
            for(int j = 0; j < a[1].size(); j++) {
                if(a[1][j] == a[0][i]) {
                    res1.push_back(a[0][i]);
                }
            }
        }
    }
    int len = a[2].size() < a[3].size() ? a[2].size() : a[3].size();
    for(int i = 0; i < len; i++) {
        if(a[2][i] == a[3][i] && a[2][i] >= 'A' && a[2][i] <= 'z') {
            c = i;
        }
    }
//    cout << isalpha(res1[1]) << endl;
//    cout << res1[1] << endl << res1[1] - 'A' + 10;
    cout << str[res1[0] - 'A'] << " " << (isalpha(res1[1]) ? (res1[1] - 'A' + 10) : res1[1] - '0') << ":" << setw(2) << setfill('0') << c;
    return 0;
}
