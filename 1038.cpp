#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> score(n);
    for(int i = 0; i < n; i++) {
        cin >> score[i];
    }
    cin >> k;
    vector<int> search(k);
    for(int i = 0; i < k; i++) {
        cin >> search[i];
    }
    int result[k] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            if(score[i] == search[j]) {
                result[j]++;
            }
        }
    }
    for(int i = 0; i < k; i++) {
        if(i != 0) cout << " ";
        cout << result[i];
    }
    return 0;
}
