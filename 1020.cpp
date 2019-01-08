#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct mooncake {
    float mount;
    float total;
    float unit;
};

bool cmp(mooncake a, mooncake b) {
    return a.unit > b.unit;
}

int main() {
    int n, d;
    float result = 0.0;
    cin >> n >> d;
    vector<mooncake> a(n);
    for(int i = 0; i < n; i++) {
       scanf("%f", &a[i].mount);
    }
    for(int i = 0; i < n; i++) {
        scanf("%f", &a[i].total);
        a[i].unit = a[i].total / a[i].mount;
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < n; i++) {
        if(a[i].mount <= d) {
            result += a[i].total;
        } else {
            result += (d * a[i].unit);
            break;
        }
        d -= a[i].mount;
    }
    printf("%.2f",result);
    return 0;
}
