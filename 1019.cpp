#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

void to_array(int n, int num[]) {
    for(int i = 0; i < 4; i++) {
        num[i] = n % 10;
        n /= 10;
    }
}

int to_number(int num[]) {
    int n = 0;
    for(int i = 0; i < 4; i++) {
        n = n * 10 + num[i];
    }
    return n;
}

int main() {
    int n, max, min;
    cin >> n;
    int num[5];
    while(1) {
        to_array(n, num);
        sort(num, num + 4);
        min = to_number(num);
        sort(num, num + 4, cmp);
        max = to_number(num);
        n = max - min;
        // setw: setwidth
        cout << setw(4) << setfill('0') << max << " - " << setw(4) << setfill('0') << min << " = " << setw(4) << setfill('0') << n << endl;
        if(n == 0 || n == 6174) break;
    }
    return 0;
}
