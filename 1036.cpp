#include <cstdio>
using namespace std;

int main() {
    int m,n;
    char c;
    scanf("%d %c", &n, &c);
    if(n%2 == 0) {
        m = n/2;
    } else {
        m = (n + 1) / 2;
    }
    // output first row
    for(int i = 0; i < n; i++) {
        printf("%c", c);
    }
    printf("\n");
    // output mid row
    for(int i = 1; i <= m -2; i++) {
        printf("%c", c);
        for(int i = 1; i <= n-2; i++) {
            printf(" ");
        }
        printf("%c", c);
        printf("\n");
    }
    // out put last row
    for(int i = 0; i < n; i++) {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
