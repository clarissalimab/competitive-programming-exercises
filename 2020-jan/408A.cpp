// https://codeforces.com/problemset/problem/408/A
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

	int k[n];

	for(int i = 0; i < n; i++) {
		cin >> k[i];
	}

	int m, current = 15*k[0], less;
	
	for(int j = 0; j < k[0]; j++) {
		cin >> m;
		current += m*5;
	}
	less = current;

	for(int i = 1; i < n; i++) {
		current = k[i]*15;
		for(int j = 0; j < k[i]; j++) {
			cin >> m;
			current += m*5;
		}
		if(less > current) {
			less = current;
		}		
	}

	cout << less << endl;
	return 0;
}

