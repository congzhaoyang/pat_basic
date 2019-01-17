#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c, d;
    int e = 0, f = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        if(b != d) {
            if((a + c) == b) {
                f += 1;
            }
            if((a + c) == d) {
                e += 1;
            }
        }
    }
    cout << e << " " << f;
    return 0;
}
