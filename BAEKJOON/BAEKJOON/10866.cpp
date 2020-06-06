#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> a;
	string command;
	int n;
	int input;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push_front") {
			cin >> input;
			a.push_front(input);
		}
		else if (command == "push_back") {
			cin >> input;
			a.push_back(input);
		}
		else if (command == "pop_front") {
			if (a.empty())
				cout << -1 << "\n";
			else {
				cout << a.front() << "\n";
				a.pop_front();
			}
		}
		else if (command == "pop_back") {
			if (a.empty())
				cout << -1 << "\n";
			else {
				cout << a.back() << "\n";
				a.pop_back();
			}
		}
		else if (command == "size")
			cout << a.size() << "\n";
		else if (command == "empty")
			cout << a.empty() << "\n";
		else if (command == "front") {
			if (a.empty())
				cout << -1 << "\n";
			else
				cout << a.front() << "\n";
		}
		else {
			if (a.empty())
				cout << -1 << "\n";
			else
				cout << a.back() << "\n";
		}
	}

	return 0;
}