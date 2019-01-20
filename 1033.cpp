#include <iostream>
#include <cstring>

using namespace std;

const int maxn = 100010;
bool hashTable[256];
char str[maxn];

int main() {
    memset(hashTable, true, sizeof(hashTable)); // memset要使用cstring头文件
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        hashTable[str[i]] = false;
    }
    gets(str);
    len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            int low = str[i] + 32;
            if(hashTable[low] == true && hashTable['+'] == true) {
                cout << str[i];
            }
        } else if(hashTable[str[i]] == true) {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}
