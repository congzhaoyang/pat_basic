#include <cstdio>
using namespace std;

const int maxn = 10000;
int school[maxn] = {0};

int main() {
    int n, schId, score;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d%d", &schId, &score);
        school[schId] += score;
    }
    int k = 1, Max = -1;
    for(int i = 1; i <= n; i++) {
        if(school[i] > Max) {
            Max = school[i];
            k = i;
        }
    }
    printf("%d %d\n", k, Max);
    return 0;
}
