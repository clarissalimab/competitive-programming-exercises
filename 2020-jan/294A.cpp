// https://codeforces.com/problemset/problem/294/A
// 03 jan 2020

#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int m, x, y;

	cin >> m;

	for(int i = 0; i < m; i++) {
		cin >> x >> y;
		x--;
		if (x != 0) {
			a[x - 1] += y - 1;
		}
		if (x != n - 1) {
			a[x + 1] += a[x] - y;
		}
		a[x] = 0;
	}

	for(int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}

