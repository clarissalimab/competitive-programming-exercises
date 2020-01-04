// https://codeforces.com/problemset/problem/427/A
// 04 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	int input, police = 0, crimes = 0;

	while(n--) {
		cin >> input;
		if(input == -1) {
			if(police == 0) {
				crimes++;
			} else {
				police--;
			}
		} else {
			police += input;
		}
	}

	cout << crimes << endl;

	return 0;
}

