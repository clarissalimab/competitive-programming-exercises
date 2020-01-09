// https://codeforces.com/problemset/problem/621/A
// 09 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, sum = 0, input;

	vector <ll> num;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> input;
		num.push_back(input);
	}

	sort(num.begin(), num.end());

	for(int i = 0; i < n; i++) {
		sum += num[i];
	}
	ll aux = 0;
	while(sum % 2 != 0 && aux < n) {	
		if(num[aux] % 2 != 0) {
			sum -= num[aux];
			break;
		}
		aux++;
	}

	if(sum % 2 != 0) {
		sum = 0;
	}

	cout << sum << endl;
	return 0;
}

