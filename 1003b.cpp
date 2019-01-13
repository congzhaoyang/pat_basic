#include <iostream>
#include <vector>
using namespace std;

bool isprime(int a) {
    for(int i = 2; i * i <= a; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    int count = 0, num = 2;
    cin >> m >> n;
//    m = 5;
//    n = 27;
    vector<int> a;
    while(count < n) {
        if(isprime(num)) {
            count++;
            if(count >= m) {
                a.push_back(num);
            }
        }
        num++;
    }
    count = 0;
    for(int i = 0; i < a.size(); i++) {
        if(count % 10 != 0) {
            cout << " ";
        }
        cout << a[i];
        if(count %10 == 9) {
            cout << endl;
        }
        count++;
    }
    return 0;
}
