/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    m = m % n; // 这里很关键，因为m可能为n的数倍
    vector<int> a(n + 1);
    vector<int> b(m + 1);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = n - m; i < n; i++) {
        b[i - n + m] = a[i];
    }
    for(int i = n - 1; i >= m; i--) {
        a[i] = a[i - m];
    }
    for(int i = 0; i < m; i++) {
        a[i] = b[i];
    }
    for(int i = 0; i < n; i++) {
        if(i != 0) {
            cout << " ";
        }
        cout << a[i];
    }
}
*/

// 解法2，数组反转法
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    m %= n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(m != 0) {
        reverse(a.begin(), a.end());
        reverse(a.begin(), a.begin() + m);
        reverse(a.begin() + m, a.end());
    }
    for(int i = 0; i < n; i++) {
        if(i != 0) {
            cout << " ";
        }
        cout << a[i];
     }
     return 0;
}
