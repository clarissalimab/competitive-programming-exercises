#define ll long long
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;

	cin >> n >> m;
	
	if(isPrime(m)) {
		for(int i = n + 1; i < m; i++) {
			if(isPrime(i)) {
				cout << "NO" << endl;
				return 0;
			}
		}
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;

	return 0;
}

