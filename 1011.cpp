#include <iostream>
#include <vector>
using namespace std;

struct num {
    double a, b, c;
    string result;
};

int main() {
    int n;
    cin >> n;
    vector<num> number(n);
    for(int i = 0; i < n; i++) {
        cin >> number[i].a >> number[i].b >> number[i].c;
    }
    for(int i = 0; i < n; i++) {
        if((number[i].a + number[i].b) > number[i].c) {
            number[i].result = "true";
        } else {
            number[i].result = "false";
        }
        cout << "Case #" << i + 1 << ": " << number[i].result << endl;
    }
}
