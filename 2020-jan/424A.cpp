// https://codeforces.com/problemset/problem/424/A
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

	string s;

	cin >> s;
	int sit = 0, stand = 0, mov = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == 'x') {
			if(sit == n/2) {
				s[i] = 'X';
				stand++;
				mov++;
			} else {
				sit++;
			}
		} else {
			if(stand == n/2) {
				s[i] = 'x';
				sit++;
				mov++;
			} else {
				stand++;
			}
		}
	}

	cout << mov << endl;
	cout << s << endl;

	return 0;
}

