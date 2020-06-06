#include <iostream>
#include <queue>
#include <vector>
#include <set>
using namespace std;


int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	vector<int> a;
	set<int> s;
	priority_queue<int, vector<int>, greater<int>> pq;

	int k, n, input, temp, t, count = 0;

	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> input;
		a.push_back(input);
		pq.push(input);
		s.insert(input);
	}

	for (int i = 0; i < n; i++) {
		temp = pq.top();
		pq.pop();
		for (int j = 0; j < k; j++) {
			t = temp * a[i];
			auto pr = s.insert(t);
			if (pr.second == true) {
				pq.push(t);
			}
		}
	}

	auto iter = s.begin();
	for (int i = 0; i < n - 2; i++)
		iter++;
	cout << *(s.erase(iter));

	return 0;
}