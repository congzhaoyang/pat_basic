#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string c;
    getline(cin, c); // getlineҲ�����õ��м�ϵ�һ��
    int a[26] = {0};
    for(int i = 0; i < c.length(); i++) {
        c[i] = tolower(c[i]);
        if(islower(c[i])) {
            a[c[i] - 'a']++;
        }
    }
    int max = 0;
    for(int i = 0; i < 26; i++) {
        if(a[i] > a[max]) max = i;
    }
    printf("%c %d", 'a' + max, a[max]);
}
