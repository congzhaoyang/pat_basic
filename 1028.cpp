#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct people {
    string name;
    string birth;
    int year;
    int month;
    int day;
};

int main() {
    int n;
    cin >> n;
    vector<people> p(n);
    int total = n;
    char d;
    for(int i = 0; i < n; i++) {
        // cin >> p[i].name >> p[i].year >> d >> p[i].month >> d >> p[i].day;
        cin >> p[i].name;
        scanf("%d/%d/%d", &p[i].year, &p[i].month, &p[i].day);
        if((p[i].year >= 2014 && p[i].month >= 9 && p[i].day >= 7) || (p[i].year <= 1814 && p[i].month <= 9 && p[i].day <= 5)) {
            total--;
        }
        cout << total;
    }
    return 0;
}
