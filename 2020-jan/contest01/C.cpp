#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;

	cin >> s;

	string lowerString = s, upperString = s;

	int upperCases = 0, lowerCases = 0;
	for(size_t i = 0; i < s.size(); i++) {
		if(s[i] < 97) {
			upperCases++;
			lowerString[i] += 32;
		} else {
			lowerCases++;
			upperString[i] -= 32;
		}
	}

	if(upperCases > lowerCases) {
		cout << upperString << endl;
		return 0;
	}

	cout << lowerString << endl;
	
	return 0;
}

