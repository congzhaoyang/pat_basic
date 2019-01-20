#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int maxn = 100010;
bool hashTable[256];
string str;

int main() {
    memset(hashTable, true, sizeof(hashTable)); // memsetҪʹ��cstringͷ�ļ�
    // gets(str);
    getline(cin, str);
    // cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        hashTable[str[i]] = false;
    }
    // gets(str);
    getline(cin, str);
    // cin >> str;
    len = str.length();
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
