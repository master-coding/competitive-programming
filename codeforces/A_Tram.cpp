#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main () {
	FASTIO;

	int t;
	cin >> t;
	int p_inside = 0;
	vector <int> v;
	while (t--) {
		int a, b;
		cin >> a >> b;
		p_inside = p_inside -a + b;
		v.push_back(p_inside);
	}
	cout << *max_element(v.begin(), v.end()) << endl;
}