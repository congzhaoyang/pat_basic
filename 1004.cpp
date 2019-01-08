#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct stu {
    string name;
    string number;
    int score;
};

bool cmp(stu a, stu b) {
    return a.score < b.score;
}

int main() {
    int n;
    cin >> n;
    vector<stu> a(n);
    for(vector<stu>::iterator it = a.begin(); it != a.end(); it++) {
        cin >> it->name >> it->number >> it->score;
    }
    sort(a.begin(), a.end(), cmp);
    cout << a[n-1].name << " " << a[n-1].number << endl;
    cout << a[0].name << " " << a[0].number;
}
