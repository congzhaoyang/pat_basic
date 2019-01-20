#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> score(101); // 使用分数作为KEY
    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        score[temp] += 1;
    }
    cin >> k;
    for(int i = 0; i < k; i++) {
        int temp;
        scanf("%d", &temp);
        if(i != 0) printf(" ");
        printf("%d", score[temp]);
    }
    return 0;
}
