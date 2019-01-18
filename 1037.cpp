#include <iostream>

using namespace std;

int main() {
    int p[3], a[3], b[3] = {0};
    const int Galleon = 17 * 29;
    const int Sickle = 29;
    scanf("%d.%d.%d %d.%d.%d", &p[0], &p[1], &p[2], &a[0], &a[1], &a[2]);
    int price = p[0] * Galleon + p[1] * Sickle + p[2];
    int money = a[0] * Galleon + a[1] * Sickle + a[2];
    int charge = money - price;
    if(charge < 0) { // 负数处理
        cout << "-";
        charge = - charge;
    }
    // 这里进制转换的思路要理清
    b[2] = charge % Sickle;
    b[1] = charge % Galleon / Sickle;
    b[0] = charge / Galleon;
    cout << b[0] << "." << b[1] << "." << b[2];
    return 0;
}
