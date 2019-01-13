#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student {
    int studentId; // 学号
    int moral; // 德分
    int study; // 才分
};

int cmp(student a, student b) {
    if((a.moral + a.study) != (b.moral + b.study)) {
        return (a.moral + a.study) > (b.moral + b.study);
    } else if (a.moral != b.moral) {
        return a.moral > b.moral;
    } else {
        return a.studentId < b.studentId;
    }
}

int main() {
    int n, low, heigh;
    // cin >> n >> low >> heigh;
    scanf("%d %d %d", &n, &low, &heigh);
    vector<student> stu[4];
    student temp;
    int total = n;
    for(int i = 0; i < n; i++) {
        cin >> temp.studentId >> temp.moral >> temp.study;
        if(temp.moral < low || temp.study < low) {
            total--;
        } else if(temp.moral >= heigh && temp.study >= heigh) {
            stu[0].push_back(temp);
        } else if(temp.moral >= heigh && temp.study < heigh) {
            stu[1].push_back(temp);
        } else if(temp.moral < heigh && temp.study < heigh && temp.moral >= temp.study){
            stu[2].push_back(temp);
        } else {
            stu[3].push_back(temp);
        }
    }
    // cout << total << endl;
    printf("%d\n", total);
    for(int i = 0; i < 4; i++) {
        sort(stu[i].begin(), stu[i].end(), cmp);
        for(int j = 0; j < stu[i].size(); j++) {
            // cout << stu[i][j].studentId << " " << stu[i][j].moral << " " << stu[i][j].study << endl;
            printf("%d %d %d\n", stu[i][j].studentId, stu[i][j].moral, stu[i][j].study);
        }
    }
    return 0;
}
