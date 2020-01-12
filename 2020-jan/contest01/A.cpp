#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	int x = 0, y = 0, z = 0, input;

	while(n--) {
		cin >> input;
		x += input;

		cin >> input;
		y += input;

		cin >> input;
		z += input;
	}

	if(x == y && y == z && z == 0) {
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;	

	return 0;
}

