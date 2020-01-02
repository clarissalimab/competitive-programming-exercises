// https://codeforces.com/problemset/problem/467/A
// 02 jan 2020

#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, rooms = 0, p, q;
	cin >> n;
	while(n--) {
		cin >> p >> q;
		if(q - p >= 2) {
			rooms++;
		}	
	}

	cout << rooms << endl;

	return 0;
}

