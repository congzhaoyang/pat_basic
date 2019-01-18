#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    bool alltrue = true; // ��Ǻ����Ƿ�ȫ����ȷ
    vector<int> len; // ���������ĺ���λ��
    cin >> n;
    vector<string> a(n); // �����n����֤��
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'}; // У������
    const int point[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}; // Ȩ������
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int sum = 0;
        int j;
        for(j = 0; j < 17; j++) {
            if(!(a[i][j] >= '0' && a[i][j] <= '9')) { // ������
                break; // ֱ������ѭ������ͬ��continue���ᵼ��j < 17;
            }
            sum += (a[i][j] - '0') * point[j];
        }
        if(j < 17) { // j < 17��ʾ����ĸ
            alltrue = false;
            len.push_back(i);
        } else { // ����ĸ
            if(m[sum % 11] != a[i][17]) { // ���в���ȷ��
                len.push_back(i);
            }
        }
    }
    // ��ʼ���
    if(alltrue == true) {
        cout << "All passed";
    } else {
        for(int i = 0; i < len.size(); i++) {
            cout << a[len[i]] << endl;
        }
    }
    return 0;
}
