#include <iostream>
#include <vector>

using namespace std;

struct student {
    string zhunkaozheng;
    int jishi;
    int kaoshi;
};

int main() {
    int n1, n2; // ѧ��������Ҫ�����Ŀ�����λ����
    int k = 0; // ��¼�Ѿ��������
    cin >> n1;
    vector<student> stu(n1); // ���ѧ����Ϣ
    vector<int> searchid; // ���Ҫ�����Ŀ�����λ��
    for(int i = 0; i < n1; i++) {
        cin >> stu[i].zhunkaozheng >> stu[i].jishi >> stu[i].kaoshi;
    }
    cin >> n2;
    for(int i = 0; i < n2; i++) {
        int temp;
        cin >> temp;
        searchid.push_back(temp);
    }
    for(int j = 0; j < n2; j++) { // ����Ҫע�⣬�����Ҫ��˳��ģ�Ҫ��searchid����Ԫ�ص�˳���������
        for(int i = 0; i < n1; i++) {
            if(stu[i].jishi == searchid[j]) {
                cout << stu[i].zhunkaozheng << " " << stu[i].kaoshi;
                k++;
                if(k < n2) {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
