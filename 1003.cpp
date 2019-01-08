#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    string r1 = "YES", r2 = "NO";
    string key = "PAT";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == key || a[i] == "APATA") {
            cout << r1;
        } else if (a[i].indexof(key) == 1 && (a[i][0] == a[i][4] == " " || a[i][0] == a[i][4] == "A")) {
            cout << r1;
        } else if (a[i][1] = "P" && a[i][3] == "T" && a[i][0] == a[i][2] == a[i][5] == " ") {
            cout << r1;
        } else {
            cout << r2;
        }
    }
    return 0;
}
