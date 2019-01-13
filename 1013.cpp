#include <iostream>
using namespace std;

const int maxn = 1000000;
int prime[maxn], pNum = 0;
bool p[maxn] = {0};

void find_prime() {
    for(int i = 2; i < maxn; i++) {
        if(p[i] == false) {
            prime[pNum++] = i;
            for(int j = i + i; j < maxn; j += i) {
                p[j] = true;
            }
        }
    }
}

int main() {
    int m, n;
//    cin >> m >> n;
    m = 5;
    n = 27;
    find_prime();
    int j = 0;
    for(int i = m - 1; i < n; i++) {
        if(j != 0) {
            cout << " ";
        }
        cout << prime[i];
        if(j == 9) {
            cout << endl;
        }
        j++;
        j %= 10;
    }
    return 0;
}
