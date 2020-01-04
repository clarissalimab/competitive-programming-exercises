// https://codeforces.com/problemset/problem/448/A
// 04 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a = 0, b = 0, input;

	for(int i = 0; i < 3; i++) {
		cin >> input;
		a += input;
	}
	for(int i = 0; i < 3; i++) {
		cin >> input;
		b += input;
	}

	int n;

	cin >> n;

	if(a%5 == 0) {
		a = a/5;
	} else {
		a = a/5 + 1;
	}

	if(b%10 ==0) {
		b = b/10;
	} else {
		b = b/10 + 1;
	}

	if(a + b > n) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
	
	return 0;
}

