// https://codeforces.com/contest/262/problem/A
// 05 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;

	cin >> n >> k;
	int a, ans = 0, counter;
	while(n--) {
		counter = 0;
		cin >> a;
		while(a > 0) {
			if(a % 10 == 7 || a % 10 == 4) {
				counter++;
			}
			a /= 10;
		}

		if(counter <= k) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}

