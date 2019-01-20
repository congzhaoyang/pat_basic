// 本题记得去学一下柳神的答案
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b;
//    a = "7_This_is_a_test";
//    b = "_hs_s_a_es";
    int len1 = a.length(), len2 = b.length();
    bool hashtable[128] = {false};
    for(int i = 0; i < len1; i++) {
        int j;
        char c1, c2;
        for(j = 0; j < len2; j++) {
            c1 = a[i];
            c2 = b[j];
            if(c1 >= 'a' && c1 <= 'z') c1 -= 32;
            if(c2 >= 'a' && c2 <= 'z') c2 -= 32;
            if(c1 == c2) break;
        }
        if(j == len2 && hashtable[c1] == false) {
            cout << c1;
            hashtable[c1] = true;
        }
    }
    return 0;
}
