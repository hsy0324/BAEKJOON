#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	stack<int> a;
	int n, temp;
	string command;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> temp;
			a.push(temp);
		}
		else if (command == "pop") {
			if (a.empty())
				cout << "-1" << endl;
			else {
				cout << a.top() << endl;
				a.pop();
			}
		}
		else if (command == "size")
			cout << a.size() << endl;
		else if (command == "empty") {
			if (a.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else {
			if (a.empty())
				cout << "-1" << endl;
			else
				cout << a.top() << endl;
		}
	}

	return 0;
}