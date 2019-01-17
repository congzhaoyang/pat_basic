#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;
    int x = floor(sqrt(2 * (n + 1)) - 1);
    if(x % 2 == 0) {
        x -= 1;
    }
    int last = n - (x + 1) * (x + 1) / 2 + 1;
    for(int i = x; i >= 1; i -= 2) { // Êä³öµ¹Èý½Ç
        for(int j = 0; j < (x - i) / 2; j++) {
            cout << " ";
        }
        for(int k = 0; k < i; k++) {
            cout << c;
        }
        cout << endl;
    }
    for(int i = 3; i <= x; i += 2) {
        for(int j = 0; j < (x - i) / 2; j++) {
            cout << " ";
        }
        for(int k = 0; k < i; k++) {
            cout << c;
        }
        cout << endl;
    }
    cout << last;
    return 0;
}
