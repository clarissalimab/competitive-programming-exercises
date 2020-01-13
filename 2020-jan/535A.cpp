// https://codeforces.com/problemset/problem/535/A
// 13 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <string> dozens = {"twenty", "thirty", "forty", "fifty",
				  "sixty", "seventy", "eighty", "ninety"};

	vector <string> unities = {"zero", "one", "two", "three", "four", "five",
				   "six", "seven", "eight", "nine", "ten",
				   "eleven", "twelve", "thirteen", "fourteen",
				   "fifteen", "sixteen", "seventeen", "eighteen",
				   "nineteen"};

	int n, m;

	cin >> n;

	if(n >= 20) {
		m = n/10;
		cout << dozens[m - 2];

		if(n % 10 != 0) {
			cout << '-' << unities[n%10];
		}
	} else {
		cout << unities[n];
	}
	cout << endl;
	return 0;
}

