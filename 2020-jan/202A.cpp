// https://codeforces.com/problemset/problem/202/A
// 02 jan 2020
#define ll long long
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;

	string pal, l_pal;
 	char ch;
	int counter = 0, l_counter = 0;
	int n, size = str.length();
	for(int i = 0; i < size; i++) {
        	ch = str[i];
        	for(int j = i; j < size; j++) {
			if(ch == str[j]) {
				pal += str[j];
			}
        	}
        	if(l_pal < pal) {
            		l_pal = pal;
        	}
        	pal = "";
	}

	cout << l_pal << endl;	

	return 0;
}

