#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd (ll a, ll b) { // 求公约数
    return b == 0 ? a : gcd(b, a % b);
}

struct Fraction{
    ll up, down;
}a, b;

Fraction reduction(Fraction result) { // 化简
    if(result.down < 0) {
        result.up = -result.up;
        result.down = -result.down;
    } else if(result.up == 0) {
        result.down = 1;
    } else {
        int d = gcd(abs(result.up), abs(result.down));
        result.up /= d;
        result.down /= d;
    }
    return result;
}

Fraction add(Fraction f1, Fraction f2) {
    Fraction result;
    result.up = f1.up * f2.down + f2.up * f1.down;
    result.down = f1.down * f2.down;
    return reduction(result);
}

Fraction sub(Fraction f1, Fraction f2) {
    Fraction result;
    result.up = f1.up * f2.down - f2.up * f1.down;
    result.down = f1.down * f2.down;
    return reduction(result);
}

Fraction multi(Fraction f1, Fraction f2) {
    Fraction result;
    result.up = f1.up * f2.up;
    result.down = f1.down * f2.down;
    return reduction(result);
}

Fraction devide(Fraction f1, Fraction f2) {
    Fraction result;
    result.up = f1.up * f2.down;
    result.down = f1.down * f2.up;
    return reduction(result);
}

void showResult(Fraction r) {
    r = reduction(r);
    if(r.up < 0) cout << "(";
    if(r.down == 1) {
        cout << r.up;
    } else if(abs(r.up) > abs(r.down)) {
        printf("%lld %lld/%lld", r.up / r.down, abs(r.up) % r.down, r.down);
    } else {
        printf("%lld/%lld", r.up, r.down);
    }
    if(r.up < 0) cout << ")";
}

int main() {
    scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
    showResult(a);
    cout << " + ";
    showResult(b);
    cout << " = ";
    showResult(add(a, b));
    cout << endl;
    showResult(a);
    cout << " - ";
    showResult(b);
    cout << " = ";
    showResult(sub(a, b));
    cout << endl;
    showResult(a);
    cout << " * ";
    showResult(b);
    cout << " = ";
    showResult(multi(a, b));
    cout << endl;
    showResult(a);
    cout << " / ";
    showResult(b);
    cout << " = ";
    if(b.up == 0) {
        cout << "Inf";
    } else {
        showResult(devide(a, b));
    }
    cout << endl;
    return 0;
}
