#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	queue<int> a;
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
				cout << -1 << endl;
			else {
				cout << a.front() << endl;
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
		else if (command == "front") {
			if (a.empty())
				cout << -1 << endl;
			else
				cout << a.front() << endl;
		}
		else {
			if (a.empty())
				cout << -1 << endl;
			else
				cout << a.back() << endl;
		}
	}

	return 0;
}