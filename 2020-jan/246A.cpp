// https://codeforces.com/problemset/problem/246/A
// 04 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	if(n <= 2) {
		cout << -1 << endl;
		return 0;
	}
	cout << n;
	n--;
	while(n > 0) {
		cout << ' ' << n;
		n--;
	}
	cout << endl;

	return 0;
}

