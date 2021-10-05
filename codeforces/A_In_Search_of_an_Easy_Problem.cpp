#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int


int main() {
	speedio;
	int n;
	cin >> n;
	vector <int> v;
	for (int i = 0; i<n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	if (*(v.end()-1) == 1)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;
}