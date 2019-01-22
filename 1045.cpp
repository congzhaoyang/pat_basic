#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int INF = 0x3fffffff;
    scanf("%d", &n);
    int a[n], leftMax[n], rightMin[n];
    vector<int> result;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    rightMin[n - 1] = INF;
    for(int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i + 1], a[i + 1]);
    }
    leftMax[0] = 0;
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], a[i - 1]);
    }
    for(int i = 0; i < n; i++) {
        if(leftMax[i] < a[i] && rightMin[i] > a[i]) {
            result.push_back(a[i]);
        }
    }
    printf("%d\n", result.size());
    for(int i = 0; i < result.size(); i++) {
        if(i != 0) cout << " ";
        printf("%d", result[i]);
    }
    cout << endl;
    return 0;
}
