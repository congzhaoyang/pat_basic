#include <iostream>
#include <vector>

using namespace std;

struct data {
    char a; // �׳�������
    char b; // �ҳ�������
    int result; // 1�����Ӯ��-1������Ӯ��0����ƽ��
};

int main()
{
    int n;
    cin >> n;
    vector<data> a(n); // ���������Ϣ
    vector<vector<int>> b(2); // ��ż���ʤƽ�ܴ���
    vector<vector<int>> c(2); // ��ż��ҷֱ��BCJ��ʤ������
    for(int i = 0; i < 2; i++) { // ��ʼ��bc����vecter
        b[i].resize(3); // resize�ı������С
        c[i].resize(3);
        for(int j = 0; j < 3; j++) {
            b[i][j] = 0;
            c[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++) { // ���a��c
        cin >> a[i].a >> a[i].b;
        if(a[i].a == a[i].b) {
            a[i].result = 0; // ƽ��
        } else if((a[i].a == 'C' && a[i].b == 'J') || (a[i].a == 'B' && a[i].b == 'C') || (a[i].a == 'J' && a[i].b == 'B')) {
            a[i].result = 1; // ��Ӯ
            if(a[i].a == 'B') {
                c[0][0] += 1;
            } else if(a[i].a == 'C') {
                c[0][1] += 1;
            } else {
                c[0][2] += 1;
            }
        } else {
            a[i].result = -1; // ��Ӯ
            if(a[i].b == 'B') {
                c[1][0] += 1;
            } else if(a[i].b == 'C') {
                c[1][1] += 1;
            } else {
                c[1][2] += 1;
            }
        }
    }
    for(int i = 0; i < n; i++) { // ���vector b
        switch(a[i].result) {
            case 1 : {
                b[0][0] += 1;
                b[1][2] += 1;
                break;
            }
            case 0 : {
                b[0][1] += 1;
                b[1][1] += 1;
                break;
            }
            case -1 : {
                b[0][2] += 1;
                b[1][0] += 1;
                break;
            }
        }
    }
    int max[2] = {0, 0};
    string str = "BCJ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(j != 0) {
                cout << " ";
            }
            cout << b[i][j];
            if(j == 2) {
                cout << endl;
            }
            if(c[i][j] > c[i][max[i]]) {
                max[i] = j;
            }
        }
    }
    cout << str[max[0]] << " " << str[max[1]];
    return 0;
}
