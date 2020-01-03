// https://codeforces.com/problemset/problem/540/A
// 03 jan 2020

#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, movements = 0, movA, movB, a, b;

	cin >> n;

	string original, secret;

	cin >> original >> secret;

	for(int i = 0; i < n; i++) {
		// two types of movement from 8 to 6, for example
		// from 8 to 6
		// from 9 - 8 to 6 - 0 = 7 movements
		a = (int)original[i];
		b = (int)secret[i];

		movA = abs(a - b);
		if(a < b) {
			movB = a + 9 - b + 1;
		} else {
			movB = b + 9 - a + 1;
		}

		if(movA < movB) {
			movements += movA;
		} else {
			movements += movB;
		}
	}

	cout << movements << endl;

	return 0;
}

