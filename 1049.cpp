#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double v;
    double sum = 0;
    for(int i = 1; i <= n; i++) {
        cin >> v;
        sum += v * i * (n + 1 - i);
    }
    printf("%.2f\n", sum);
    return 0;
}
