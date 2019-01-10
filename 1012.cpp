#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    float result[5] = {0};
    int numb[5] = {0};
    int flag = 0, num = 0;
    for(int i = 0; i < n; i++) {
        int r = a[i] % 5;
        switch(r) {
            case 0 : {
                if(a[i] % 2 == 0) {
                    result[0] += a[i];
                    numb[0]++;
                }
                break;
            }
            case 1 : {
                if (flag == 0) {
                    result[1] += a[i];
                    flag = 1;
                } else {
                    result[1] -= a[i];
                    flag = 0;
                }
                numb[1]++;
                break;
            }
            case 2 : {
                result[2]++;
                numb[2]++;
                break;
            }
            case 3 : {
                result[3] += a[i];
                num++;
                numb[3]++;
                break;
            }
            case 4 : {
                if(a[i] > result[4]) {
                    result[4] = a[i];
                }
                numb[4]++;
                break;
            }
        }
    }
    result[3] /= num;
    for(int i = 0; i < 5; i++) {
        if(i != 0) {
            cout << " ";
        }
        if(i != 3) {
            if(numb[i] == 0) {
                cout << "N";
            } else {
                cout << fixed << setprecision(0) << result[i];
            }
        } else {
            if(numb[i] == 0) {
                cout << "N";
            } else {
                cout << fixed <<  setprecision(1) << result[i];
            }
        }
    }
    return 0;
}
