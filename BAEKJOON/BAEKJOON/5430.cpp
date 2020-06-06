#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	int t, n, input;
	string p;
	char c;
	bool flag, reverse;
	deque<int> a;

	cin >> t;
	while (t--) {
		a.clear();
		cin >> p;
		auto iter = p.begin();
		cin >> n;
		flag = true;
		reverse = false;

		if (n != 0) {
			while (n--) {
				cin >> c >> input;
				a.push_back(input);
			}
			cin >> c;
		}
		else {
			cin >> c;
			cin >> c;
		}

		while (iter != p.end()) {
			if (*iter == 'R') {
				if (reverse)
					reverse = false;
				else
					reverse = true;
			}
			else {
				if (a.empty()) {
					cout << "error\n";
					flag = false;
					break;
				}
				if (reverse)
					a.pop_back();
				else
					a.pop_front();
			}
			iter++;
		}
		if (flag) {
			cout << '[';
			if (reverse) {
				for (int i = a.size() - 1; i >= 0; i--) {
					if (i == 0)
						cout << a[i];
					else
						cout << a[i] << ',';
				}
			}
			else {
				for (int i = 0; i < a.size(); i++) {
					if (i == a.size() - 1)
						cout << a[i];
					else
						cout << a[i] << ',';
				}
			}
			cout << "]\n";
		}
	}

	return 0;
}