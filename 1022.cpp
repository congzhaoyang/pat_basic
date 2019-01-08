#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b;
    int ans[34];
    int num = 0;
    do {
        ans[num++] = sum % c;
        sum = sum / c;
    } while(sum != 0);
    for(int i = num - 1; i >= 0; i--) {
        cout << ans[i];
    }
    return 0;
}
