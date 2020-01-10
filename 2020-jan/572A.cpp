// https://codeforces.com/contest/572/problem/A
// 10 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int nA, nB;

	cin >> nA >> nB;

	int k, m;

	cin >> k >> m;

	ll input;

	for(int i = 0; i < k; i++) {
		cin >> input;
	}
	ll biggerA = input;
	for(int i = k; i < nA; i++) {
		cin >> input;
	}
	for(int i = 0; i <= nB - m; i++) {
		cin >> input;
	}
	ll smallerB = input;
	for(int i = nB - m + 1; i < nB; i++) {
		cin >> input;
	}

	if(biggerA < smallerB) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	} 
	return 0;
}

