// https://codeforces.com/contest/278/problem/A
// 05 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	int d[n];

	for(int i = 0; i < n; i++) {
		cin >> d[i];
	}

	int s, t;

	cin >> s >> t;
	
	int d1 = 0, d2 = 0, aux = s - 1;
	while(aux != t - 1) {
		d1 += d[aux];
		if(aux == n - 1) {
			aux = 0;
		} else {
			aux++;
		}
	}
	aux = s - 1;

	while(aux != t - 1) {
		if(aux == 0) {
			aux = n - 1;
		} else {
			aux--;
		}
		d2 += d[aux];
	}
		
	if(d1 < d2) {
		cout << d1 << endl;
		return 0;
	}
	cout << d2 << endl;
	return 0;
}

