#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "+1.23400E-03";
    string a, b;
    int sign = 1;
    // cin >> s;
    // s = "+1.23400E-03";
    // s = "-1.2E+10"
    if(s[0] == '-') {
        sign = -1;
    }
    int epos = s.find('E'); // EµÄÎ»ÖÃ
    int len1 = epos - 1;
    int len2 = s.length() - epos - 1;
    a = s.substr(1, len1);
    b = s.substr(epos + 1, len2);
    cout << a << b;
    return 0;
}
