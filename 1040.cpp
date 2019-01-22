#include <iostream>
#include <string>

using namespace std;

int main() {
    int mod = 1000000007;
    int result = 0;
    string str;
    cin >> str;
    int len = str.length();
    int leftNumP[len] = {0};
    for(int i = 0; i < len; i++) { // 从左往右查P
        if(i > 0) {
            leftNumP[i] = leftNumP[i - 1];
        }
        if(str[i] == 'P') {
            leftNumP[i]++;
        }
    }
    int rightNumT = 0;
    for(int i = len - 1; i >= 0; i--) { // 从右往左查T
        if(str[i] == 'T') {
            rightNumT++;
        } else if(str[i] == 'A') {
            result = (result + leftNumP[i] * rightNumT) % mod;
        }
    }
    cout << result % mod << endl;
    return 0;
}
