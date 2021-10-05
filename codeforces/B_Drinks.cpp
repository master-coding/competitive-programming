#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long int


int main() {
	speedio;
	int n;
	cin >> n;
	int a[n];
	double res = 0;
	for (int i = 0; i<n; i++) {
		cin >> a[i];
		res = res + a[i];
	}
	cout << res/n;

}