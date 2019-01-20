#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
//    a = "7+IE";
//    b = "7_This_is_a_test";
    int count = 0;
    bool caps = (a.find('+') < 0) ? false : true;
    int len1 = a.length(), len2 = b.length();
    for(int j = 0; j < len2; j++) {
        char c1, c2;
        int i;
        for(i = 0; i < len1; i++) {
            c1 = a[i];
            c2 = b[j];
            if('0' <= c1 && c1 <= '9') { // 如果c1是数字，则直接判断
                if(c1 == c2) break;
            } else { // 如果c1不是数字
                if(c2 <= 'Z' && c2 >= 'A' && (a.find('+') >= 0)) break; // 如果大写键坏掉，同时c2想输出大写，break掉
                if(c1 <= 'z' && c1 >= 'a') c1 -= 32; // 进到这里，说明大写键没有坏掉，可以输出大写
                if(c2 <= 'z' && c2 >= 'a') c2 -= 32;
                if(c1 == c2) break;
            }
        }
        if(i == len1) {
            cout << b[j];
            count++;
        }
    }
    if(count == 0) cout << endl;
    return 0;
}
