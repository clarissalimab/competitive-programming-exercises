#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, lucky = 0;

	cin >> n;

	while(n > 0) {
		if(n % 10 == 4 || n % 10 == 7) {
			lucky++;
		}
		n /= 10;
	}
	if(lucky == 7 || lucky == 4) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

