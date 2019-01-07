#include <iostream>
#include <string>
using namespace std;

int main() {
    int mod = 1000000007;
    int result = 0;
    int countp = 0, countt = 0;
    string str;
    cin >> str;
    int length = str.length();
    for(int i = 0; i < length; i++) {
        if(str[i] == 'T') {
            countt++;
        }
    }
    for(int i = 0; i < length; i++) {
        if(str[i] == 'P') {
            countp++;
        }
        if(str[i] == 'T') {
            countt--;
        }
        if(str[i] == 'A') {
            result += countp * countt;
        }
    }
    cout << result % mod << endl;
    return 0;
}
