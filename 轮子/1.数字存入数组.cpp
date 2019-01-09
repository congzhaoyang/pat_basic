#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int n = 123;
    int a[3] = {0};
    while(n != 0) {
        a[i] = n % 10;
        n /= 10;
        cout << a[i];
    }
    return 0;
}
