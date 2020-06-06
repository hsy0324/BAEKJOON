#include <iostream>
#include <queue>
using namespace std;

int main() {
	int total, n, m, input, count;

	cin >> total;
	while (total--) {
		count = 0;
		priority_queue<int, vector<int>, less<int>>a;
		queue<pair<int, int>>b;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> input;
			a.push(input);
			b.push({ i,input });
		}
		while (!b.empty()) {
			int idx = b.front().first;
			int val = b.front().second;
			b.pop();

			if (a.top() == val) {
				a.pop();
				count++;
				if (idx == m) {
					cout << count << "\n";
					break;
				}
			}
			else {
				b.push({ idx,val });
			}
		}
	}

	return 0;
}