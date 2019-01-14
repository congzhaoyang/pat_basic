#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    int a[10] = {0};
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        a[s[i] - '0'] += 1;
    }
    for(int i = 0; i < 10; i++) {
        if(a[i] != 0) {
            cout << i << ":" << a[i] << endl;
        }
    }
    return 0;
}
