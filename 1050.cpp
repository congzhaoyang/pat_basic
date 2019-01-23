#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    if(N == 1) {
        cout << a[0];
        return 0;
    }
    sort(a.begin(), a.end(), cmp);
    int m = (int)ceil(sqrt(1.0 * N));
    while(N % m != 0) m++;
    int n = N / m, i = 0, j = 0, now = 0;
    int U = 0, D = m - 1, L = 0, R = n - 1; // ËÄ·½±ß½ç
    vector<vector<int>> matrix(m, vector<int> (n));
    while(now < N) {
        while(now < N && j < R) {
            matrix[i][j] = a[now++];
            j++;
        }
        while(now < N && i < D) {
            matrix[i][j] = a[now++];
            i++;
        }
        while(now < N && j > L) {
            matrix[i][j] = a[now++];
            j--;
        }
        while(now < N && i > U) {
            matrix[i][j] = a[now++];
            i--;
        }
        U++, D--, L++, R--;
        i++, j++;
        if(now == N - 1) {
            matrix[i][j] = a[now++];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if(j != n - 1) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}
