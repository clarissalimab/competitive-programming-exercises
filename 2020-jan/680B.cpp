// https://codeforces.com/problemset/problem/680/B
// 06 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a;

	cin >> n >> a;

	vector <int> t;

	int input;

	for(int i = 0; i < n; i++) {
		cin >> input;
		t.push_back(input);
	}

	int distance = 1, crimes = 0;
	a--;
	if(t[a] == 1) crimes++;
	while(a + distance < n && a - distance >= 0) {
		if(t[a + distance] == 1 && t[a - distance] == 1) {
			crimes += 2;
		}
		distance++;
	}
	if(a - distance < 0) {
		for(int i = distance + a; i < n; i++) {
			if(t[i] == 1) {
				crimes++;
			}
		}
	} else if(a + distance >= n) {
		for(int i = 0; i <= a - distance; i++) {
			if(t[i] == 1) {
				crimes++;
			}
		}
	}
	cout << crimes << endl;
	return 0;
}

