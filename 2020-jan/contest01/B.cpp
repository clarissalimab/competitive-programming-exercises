#define ll long long
#include <bits/stdc++.h>

using namespace std;

bool sameDigits(int year) {
	int a, b, c, d;

	a = year/1000;
	year = year % 1000;

	b = year/100;
	year = year % 100;

	c = year/10;
	year = year % 10;

	d = year;

	if(a == b || a == c || a == d || b == c || b == d || c == d) {
		return true;
	}
	return false;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int y;

	cin >> y;
	y++;

	while(sameDigits(y)) {
		y++;
	}

	cout << y << endl;
	return 0;
}

