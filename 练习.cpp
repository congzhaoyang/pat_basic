/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    for(int i = 5; i < 9; i++) {
        vi.push_back(i);
    }
    vi.erase(vi.begin() + 3);
    for(int i = 0; i < vi.size(); i++) {
        cout << vi[i];
    }
    return 0;
}
*/

/*
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        s.insert(i);
    }
    s.erase(2);
    s.erase(s.find(3));
    for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    for(string::iterator it = str.begin(); it != str.end(); it++) {
        cout << *it;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> mp;
    mp['m'] = 10;
    mp['r'] = 20;
    mp['a'] = 30;
    for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << it->second;
    }
    cout << endl;
    map<char, int>::iterator it = mp.find('a');
    cout<< it->first << it->second << endl;
    mp.erase(it);
    cout << endl;
    for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << it->second;
    }
    cout << endl << mp.size();
    return 0;
}
*/

/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    queue<int> q;
    cin >> n;
    for(int i = 0; i < n; i++) {
        q.push(i);
    }
    cout << q.size();
    for(int i = 0; i <= q.size(); i++) {
        cout << q.front();
        q.pop();
    }
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 5, b = -5;
    cout << max(a, b) << " " << min(a, b) << endl;
    cout << abs(a) << " " << abs(b) << endl;
    swap(a, b);
    cout << a << b;
    int c[5] = {0};
    fill(c, c+5, 233);
    for(int i = 0; i < 5; i++) {
        cout << c[i] << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int a[5] = {23, 4, 34, 556, 22};

    sort(a, a+5, cmp);
    for(int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        a.push_back(i);
    }
    cout << a.size() << endl;
    return 0;
}
*/


#include <iostream>
#include <string.h>
using namespace std;
//数字加密
void shuzijiami() {

	char num1[101]; char num2[101];
	while (scanf("%s %s", num1, num2) != EOF) {
		int len1 = strlen(num1); int len2 = strlen(num2);
		char tmp[101];
		int i = 1;
		for (i = 1; i <=len1&&i <=len2; i++) {
			if (i % 2 == 1) {
				//tmp[i - 1] = ((num1[len1 - i] - '0') + (num2[len2 - i] - '0')) % 13+'0';
				//if ((tmp[i - 1]-'0') == 10)tmp[i - 1] == 'J';//这几条语句不运行
				//else if((tmp[i - 1] - '0') == 11)tmp[i - 1] == 'Q';
				//else if ((tmp[i - 1] - '0') == 12) tmp[i - 1] == 'K';

				int tp= ((num1[len1 - i] - '0') + (num2[len2 - i] - '0')) % 13 ;
				if (tp == 10)tmp[i - 1] == 'J';//这几条语句不运行
				else if (tp == 11)tmp[i - 1] == 'Q';
				else if (tp == 12) tmp[i - 1] == 'K';
				else tmp[i - 1] == '0'+tp;

			}
			else {
				tmp[i - 1] = ( num2[len2 - i] - '0'-( num1[len1 - i] - '0' )) + '0';
				if (tmp[i - 1]- '0' < 0)tmp[i - 1] = tmp[i - 1] + 10 ;
			}
		}
		//若num2较长
		if (len2 > len1) {
			for (; i < len2; i++) {
				tmp[i - 1] = num2[len2 - i];
			}
		}
		tmp[i++] = '\0';
		for (int j = strlen(tmp) - 1; j >= 0; j--) {
			printf("%c", tmp[j]);
		}
	}
}
int main() {

	shuzijiami();
	return 0;
}
