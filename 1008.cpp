#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    m = m % n; // ����ܹؼ�����Ϊm����Ϊn������
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
