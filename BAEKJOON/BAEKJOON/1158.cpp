#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	list<int> a;
	vector<int> b;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		a.push_back(i);
	auto iter = a.begin();

	while (n--) {
		for (int i = 0; i < k - 1; i++) {
			iter++;
			if (iter == a.end()) {
				iter = a.begin();
			}
		}
		b.push_back(*iter);
		iter = a.erase(iter);
		if (iter == a.end())
			iter = a.begin();
	}

	cout << "<";
	for (int i = 0; i < b.size(); i++) {
		if (i == b.size() - 1)
			cout << b[i] << ">\n";
		else
			cout << b[i] << ", ";
	}

	return 0;
}