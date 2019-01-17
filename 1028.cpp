#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct people {
    string name;;
    int year;
    int month;
    int day;
} oldest, youngest, mostleft, mostright, temp;

bool lessEqu(people a, people b) {
    if(a.year != b.year) {
        return a.year > b.year;
    } else if(a.month != b.month) {
        return a.month > b.month;
    } else if(a.day != b.day) {
        return a.day > b.day;
    }
}

bool moreEqu(people a, people b) {
    if(a.year != b.year) {
        return a.year < b.year;
    } else if(a.month != b.month) {
        return a.month < b.month;
    } else if(a.day != b.day) {
        return a.day < b.day;
    }
}

void init() {
    mostleft.year = youngest.year = 1814;
    mostright.year = oldest.year = 2014;
    mostleft.month = oldest.month = mostright.month = youngest.month = 9;
    mostleft.day = oldest.day = mostright.day = youngest.day = 6;
}

int main() {
    init();
    int n, num = 0; // num存储有效生日数
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp.name;
        scanf("%d/%d/%d", &temp.year, &temp.month, &temp.day);
        if(moreEqu(mostleft, temp) && lessEqu(mostright, temp)) {
            num++;
            if(lessEqu(oldest, temp)) {
                oldest = temp;
            }
            if(moreEqu(youngest, temp)) {
                youngest = temp;
            }
        }
    }
    cout << num;
    if(num > 0) { // 处理零输入和没有数据是合理生日的情况
        cout << " " << oldest.name << " " << youngest.name;
    }
    return 0;
}
