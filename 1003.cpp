#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        int len = str.length();
        int nump = 0, numt = 0, other = 0;
        int locp = -1, loct = -1;
        for(int i = 0; i < len; i++) {
            if(str[i] == 'P') {
                nump++;
                locp = i;
            } else if(str[i] == 'T') {
                numt++;
                loct = i;
            } else if(str[i] != 'A') {
                other++;
            }
        }
        if((nump != 1) || (numt != 1) || (other != 0) || (loct - locp <= 1)) {
            cout << "NO" << endl;
            continue;
        }
        int x = locp, y = loct - locp - 1, z = len - loct - 1;
        if(z - x * (y - 1) == x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
