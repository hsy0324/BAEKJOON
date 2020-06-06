#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string input;
	char c, b;
	int n;

	cin >> input >> n;
	list<char> a(input.begin(),input.end());
	auto iter = a.end();
	 
	for (int i = 0; i < n; i++) {
		cin >> c;

		if (c == 'D') {
			if (iter != a.end())
				iter++;
		}
		else if (c == 'B') {
			if (iter != a.begin()) {
				iter--;
				iter = a.erase(iter);
			}
		}
		else if (c == 'P') {
			cin >> b;
			a.insert(iter, b);
		}
		else {
			if (iter != a.begin())
				iter--;
		}
	}
	for (auto& elem : a)
		cout << elem;
	return 0;
}