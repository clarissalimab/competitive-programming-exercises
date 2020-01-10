// https://codeforces.com/problemset/problem/556/A
// 10 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, a = 0, b = 0;

	cin >> n;

	string s;

	cin >> s;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1') {
			a++;
		} else {
			b++;
		}	
	}
	cout << abs(a - b) << endl;
	return 0;
}

