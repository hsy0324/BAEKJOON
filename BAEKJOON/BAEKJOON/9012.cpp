#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string s;
	int n, count;
	bool flag;
	cin >> n;
	while (n--) {
		cin >> s;
		list<char> a(s.begin(), s.end());
		count = 0;
		flag = false;
		for (auto iter = a.begin(); iter != a.end(); iter++) {
			if (count < 0)
				break;
			if (*iter == '(')
				count++;
			else
				count--;
		}
		if (!count)
			flag = true;
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}