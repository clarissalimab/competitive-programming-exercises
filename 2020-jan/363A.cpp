// https://codeforces.com/problemset/problem/363/A
// 04 jan 2020

#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n;
	do {
		m = n%10;
		if (m >= 5) {
			cout << "-O|";
			m -= 5;
		} else {
			cout << "O-|";
		}		
		for(int i = 0; i < 5; i++) {
			if(i == m) {
				cout << '-';
			} else {
				cout << 'O';
			}
		}
		cout << endl;
		n = n/10;
	} while (n > 0);

	return 0;
}

