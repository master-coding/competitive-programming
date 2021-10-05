#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n, w;
	cin >> k >> n >> w;
	long long int total_cost = 0;
	for (int i = 1; i<=w; i++) {
		total_cost = total_cost + (i * k); 
	}
	if (total_cost <= n)
		cout << 0;
	else
		cout << total_cost - n; 
}