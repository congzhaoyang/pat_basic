#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int k, n;
    int flag = 0;
    cin >> k;
    vector<int> v(k);
    vector<int> arr(1000);
    fill(arr.begin(), arr.end(), 0);
    for(int i = 0; i < k; i++) {
        cin >> n;
        v[i] = n;
        while(n != 1) {
            if(n %2 != 0) {
                n = (3 * n + 1) / 2;
            } else {
                n /= 2;
            }
            arr[n] ++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) {
        if(arr[v[i]] == 0) {
            if(flag != 0) {
                cout << " ";
            }
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}
