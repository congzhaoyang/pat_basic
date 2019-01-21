#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int m[62] = {0}, n[62] = {0}, q[62] = {0};
    bool enough = true;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            m[a[i] - '0']++;
        } else if(a[i] >= 'A' && a[i] <= 'Z') {
            m[a[i] - 'A' + 10]++;
        } else {
            m[a[i] - 'a' + 10]++;
        }
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i] >= '0' && b[i] <= '9') {
            n[b[i] - '0']++;
        } else if(b[i] >= 'A' && b[i] <= 'Z') {
            n[b[i] - 'A' + 10]++;
        } else {
            n[b[i] - 'a' + 10]++;
        }
    }
    for(int i = 0; i < 62; i++) {
        if(m[i] < n[i]) {
            enough = false;
        }
        q[i] = m[i] - n[i];
    }
    int total = 0;
    if(enough) {
        cout << "Yes";
        for(int i = 0; i < 62; i++) {
            if(q[i] > 0) total += q[i];
        }
    } else {
        cout << "No";
        for(int i = 0; i < 62; i++) {
            if(q[i] < 0) total -= q[i];
        }
    }
    cout << " " << total;
    return 0;
}

