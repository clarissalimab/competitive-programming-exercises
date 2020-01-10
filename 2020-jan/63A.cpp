// https://codeforces.com/problemset/problem/63/A
// 10 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;

	cin >> n;

	vector <string> rat, womanOrChild, man, captain;
	
	string name, status;

	for(int i = 0; i < n; i++) {
		cin >> name >> status;
		if(status == "rat") {
			rat.push_back(name);
		} else if(status == "woman" || status == "child") {
			womanOrChild.push_back(name);
		} else if(status == "man") {
			man.push_back(name);
		} else {
			captain.push_back(name);
		}
	}

	for(size_t i = 0; i < rat.size(); i++) {
		cout << rat.at(i) << endl;
	}
	for(size_t i = 0; i < womanOrChild.size(); i++) {
		cout << womanOrChild.at(i) << endl;
	}
	for(size_t i = 0; i < man.size(); i++) {
		cout << man.at(i) << endl;
	}
	for(size_t i = 0; i < captain.size(); i++) {
		cout << captain.at(i) << endl;
	}
	return 0;
}

