#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) { // 素数判断算法，需要掌握
    if(n <= 1) return false;
    int sqr = (int)sqrt(1.0 * n);
    for(int i = 2; i <= sqr; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, count = 0;
    cin >> n;
    for(int i = 3; i + 2 <= n; i += 2) {
        if(isPrime(i) && isPrime(i + 2)) count++;
    }
    cout << count;
    return 0;
}
