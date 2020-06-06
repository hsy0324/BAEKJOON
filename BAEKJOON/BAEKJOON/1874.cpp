#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main() {
	stack<int> a;
	deque<char> b;
	int n, input, j = 1;
	bool flag = true;

	cin >> n;
	while (n--) {
		cin >> input;

		if (j > input) {
			if (input == a.top()) {
				a.pop();
				b.push_back('-');
			}
			else {
				flag = false;
				cout << "NO\n";
				break;
			}
		}
		else {
			while (j <= input) {
				a.push(j);
				b.push_back('+');
				j++;
			}
			a.pop();
			b.push_back('-');
		}
	}

	if (flag) {
		for (auto& elem : b) {
			cout << elem << "\n";
		}
	}

	return 0;
}