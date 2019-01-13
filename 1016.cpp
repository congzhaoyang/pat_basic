#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    string a, b;
    int da, db;
    int na = 0, nb = 0;
    int counta = 0, countb = 0;
    int temp = 0;
    // a = "3862767", da = 6, b = "13530293", db = 3;
    cin >> a >> da >> b >> db;
    for(int i = 0; i < a.length(); i++) {
        if(da == (a[i] - '0')) {
            counta++;
        }
    }
    for(int i = 0; i < b.length(); i++) {
        if(db == (b[i] - '0')) {
            countb++;
        }
    }
    for(int i = 0; i < counta; i++) {
        na += pow(10, i) * da;
    }
    for(int i = 0; i < countb; i++) {
        nb += pow(10, i) * db;
    }
    cout << na + nb;
}
