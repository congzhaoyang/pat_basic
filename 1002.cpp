/*
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main () {
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	string nstr;
	cin >> nstr;
	stack<string> s;
	int result = 0;
	for(int i = 0; i < nstr.size(); i++) {
		result += (nstr[i] - '0');
	}
	while(result != 0) {
		string r = str[result % 10];
        s.push(r);
		result /= 10;
	}
	while(!s.empty()) {
		string r = s.top();
		s.pop();
		cout << r;
		if(s.size() >= 1) {
            cout << " ";
		}
	}
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> n;
    int sum = 0;
    for(unsigned int i = 0; i < n.length(); i++) {
        sum += n[i] - '0';
    }
    string r = to_string(sum);
    for(unsigned int i = 0; i < r.length(); i++) {
        if(i != 0) {
            cout << " ";
        }
        cout << str[r[i] - '0'];
    }
    return 0;
}
