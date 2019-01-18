#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    bool alltrue = true; // 标记号码是否全部正确
    vector<int> len; // 存放有问题的号码位置
    cin >> n;
    vector<string> a(n); // 存放身n个份证号
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'}; // 校验数组
    const int point[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; // 权重数组
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int sum = 0;
        int j;
        for(j = 0; j < 17; j++) {
            if(!(a[i][j] >= '0' && a[i][j] <= '9')) { // 非数字
                break; // 直接跳出循环，不同于continue，会导致j < 17;
            }
            sum += (a[i][j] - '0') * point[j];
        }
        if(j < 17) { // j < 17表示有字母
            alltrue = false;
            len.push_back(i);
        } else { // 无字母
            if(m[sum % 11] != a[i][17]) { // 教研不正确的
                len.push_back(i);
            }
        }
    }
    // 开始输出
    if(alltrue == true) {
        cout << "All passed";
    } else {
        for(int i = 0; i < len.size(); i++) {
            cout << a[len[i]] << endl;
        }
    }
    return 0;
}
