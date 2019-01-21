#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp; // ʹ��map�������С����ܷ�
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
    for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) { // �����ܷ���ߵ�һ�飬ע���������ʹ�÷���
        if(it->second > max->second) max = it;
    }
    cout << max->first << " " << max->second;
    return 0;
}
