#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp; // 使用map保存各个小组的总分
    for(int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d-%d %d", &a, &b, &c);
        if(mp[a]) {
            mp[a] += c;
        } else {
            mp[a] = c;
        }
    }
    map<int, int>::iterator max = mp.begin();
    for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) { // 查找总分最高的一组，注意迭代器的使用方法
        if(it->second > max->second) max = it;
    }
    cout << max->first << " " << max->second;
    return 0;
}
