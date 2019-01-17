#include <iostream>
#include <vector>

using namespace std;

struct student {
    string zhunkaozheng;
    int jishi;
    int kaoshi;
};

int main() {
    int n1, n2; // 学生数和需要搜索的考试座位号数
    int k = 0; // 记录已经输出个数
    cin >> n1;
    vector<student> stu(n1); // 存放学生信息
    vector<int> searchid; // 存放要搜索的考试座位号
    for(int i = 0; i < n1; i++) {
        cin >> stu[i].zhunkaozheng >> stu[i].jishi >> stu[i].kaoshi;
    }
    cin >> n2;
    for(int i = 0; i < n2; i++) {
        int temp;
        cin >> temp;
        searchid.push_back(temp);
    }
    for(int j = 0; j < n2; j++) { // 这里要注意，输出是要有顺序的，要按searchid里面元素的顺序输出才行
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
