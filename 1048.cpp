#include <iostream>
#include <algorithm> // ʹ��reverse��appendҪ����algorithmͷ�ļ�

using namespace std;

int main() {
    char num[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
    string a, b;
//    a = "1234567";
//    b = "368782971";
    cin >> a >> b;
    int len1 = a.length(), len2 = b.length();
    int len;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(len1 > len2) {
        len = len1;
        b.append(len1 - len2, '0');
    } else {
        len = len2;
        a.append(len2 - len1, '0');
    }
    string c[len];
    for(int i = 0; i < len; i++) {
        if(i % 2 == 0) { // ��Ӧԭ�����е�����λ
            int temp = ((b[i] - '0') + (a[i] - '0')) % 13;
            c[len - 1 - i] = num[temp];
        } else {// ��Ӧԭ�����е�ż��λ
            int temp = (b[i] - '0') - (a[i] - '0');
            if(temp < 0) temp += 10;
            c[len - 1 - i] = temp + '0'; // �ӡ�0����Ϊָ�����ַ�
        }
    }
    for(int i = 0; i < len; i++) {
        cout << c[i];
    }
    return 0;
}
