#include <iostream>
using namespace std;

int main() {
    int n;
    char a;
    // cin >> n >> a;
    n = 19;
    a = '*';
    int sn = 1;
    int snnext;
    int floor = 0;
    if(n == 1) {
        cout << a;
    } else {
        for(int t = 0; ; t++) {
            sn += 2 * (2 * t + 3);
            snnext = sn + 2 * (2 * (t + 1) + 3);
            cout << sn << snnext << endl;
            if(sn <= n && snnext > n) {
                floor = t;
                break;
            }
        }
    }
    cout << floor;
    int width = 2 * floor + 3;
    for(int i = floor; i >= 0; i--) {
        for(int i = 0; i < width; i++) {
            cout << a;
            if(i == width - 1) {
                cout << endl;
            }
        }
    }

    return 0;
}
