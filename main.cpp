#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int from = 0, to = n - 1;
	int new_arr[n];
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			new_arr[i] = a[from++];
		else
			new_arr[i] = a[to--];
	}
	int sum = 0;
	bool ok = true;
	for (int i = 0; i < n; i++) {
		if (sum == new_arr[i]) {
			ok = false;
			break;
		}
		sum += new_arr[i];
	}
	if (!ok) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	for (int& x : new_arr)
		cout << x << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	while (T--)
		solve();
}
