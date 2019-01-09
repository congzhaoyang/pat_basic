#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> a(3);
    cin >> n;
    int i = 0;
    while(n != 0) {
       a[i] =  n % 10;
       n /= 10;
       i++;
    }
    for(int i = a.size() - 1; i >= 0; i--) {
        for(int j = 1; j <= a[i]; j++ ) {
            if(i == 0) {
                cout << j;
            } else if (i == 1) {
                cout << "S";
            } else if (i == 2) {
                cout << "B";
            }
        }
    }
    return 0;
}
