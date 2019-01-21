#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, p, count = 0;
    cin >> n >> p;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0, j = 0;
    while(i < n && j < n) {
        while(j < n && a[j] <= (long long) a[i] * p) { // ʹ��ǿ������ת������ֹ����
            count = max(count, j - i + 1); //ʹ��max api
            j++;
        }
        i++;
    }
    cout << count;
    return 0;
}
