#include <iostream>

using namespace std;

int main() {
    int c1, c2;
    const int clk_tck = 100;
    cin >> c1 >> c2;
    int num = (c2 - c1 + 50) / 100;
    int second = num % 60;
    int temp = num / 60;
    int hour = temp / 60;
    int minute = temp % 60;
    if(hour != 0) {
        if(hour < 10) {
            cout << 0;
        }
        cout << hour << ":";
    } else {
        cout << "00:";
    }
    if(minute != 0) {
        if(minute < 10) {
            cout << 0;
        }
        cout << minute << ":";
    } else {
        cout << "00:";
    }
    if(second != 0) {
        if(second < 10) {
            cout << 0;
        }
        cout << second;
    } else {
        cout << "00";
    }
    return 0;
}
