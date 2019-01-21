#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a[6] = {0};
    for(int i = 0; i < s.length(); i++) { // 统计PATest字母各有多少个，存在a[6]内
        switch(s[i]) {
            case 'P': {
                a[0]++;
                break;
            }
            case 'A': {
                a[1]++;
                break;
            }
            case 'T': {
                a[2]++;
                break;
            }
            case 'e': {
                a[3]++;
                break;
            }
            case 's': {
                a[4]++;
                break;
            }
            case 't': {
                a[5]++;
                break;
            }
        }
    }
    int max = a[0];
    for(int i = 0; i < 6; i++) { // 统计字母书最多的有几个
        if(a[i] > max) max = a[i];
    }
    for(int i = 0; i < max; i++) { // 循环输出
        for(int j = 0; j < 6; j++) {
            if(a[j] > 0) {
                switch(j) {
                    case 0 : cout << "P";
                    break;
                    case 1 : cout << "A";
                    break;
                    case 2 : cout << "T";
                    break;
                    case 3 : cout << "e";
                    break;
                    case 4 : cout << "s";
                    break;
                    case 5 : cout << "t";
                    break;
                }
                a[j]--;
            }
        }
    }
    return 0;
}
