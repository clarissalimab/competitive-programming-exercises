// https://codeforces.com/problemset/problem/551/A
// 02 jan 2020

#define ll long long
#include <bits/stdc++.h>

using namespace std;

void get_position(vector <int> array, size_t size, int el) {
	for(size_t i = 0; i < size; i++) {
		if(array[i] == el) {
			cout << int(i) + 1;
			break;
		}
	}
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, n2, input;

	cin >> n;

	n2 = n;
	vector <int> a, b;

	while(n--) {
		cin >> input;
		a.push_back(input);
		b.push_back(input);
	}

	size_t size = a.size();

	sort(a.begin(), a.end(), greater<int>());

	get_position(a, size, b[0]);
	int i = 1;
	while(i < n2) {
		cout << ' ';
		get_position(a, size, b[i]);
		i++;
	}

	cout << endl;


	return 0;
}

