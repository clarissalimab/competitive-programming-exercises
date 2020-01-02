// https://codeforces.com/group/JDDLXp8GNX/contest/249586/problem/A
// 02 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, c;

	cin >> n >> c;

	int words = 1, t, lastT;

	cin >> lastT;
	n--;
	while(n--) {
		cin >> t;
		if(t - lastT > c) {
			words = 0;
		}
		words++;
		lastT = t;
	}

	cout << words << endl;

	return 0;
}

