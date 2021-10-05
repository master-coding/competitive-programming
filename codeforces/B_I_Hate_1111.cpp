#include <bits/stdc++.h>
using namespace std;


#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define tlp(t) while(t--)
#define nl "\n"

int main() {
	int tc;
	cin >> tc;
	tlp(tc) {
		int num;
		cin >> num;
		int val = num - ((num % 11) * 111);
		if (val >=0 && val % 11 == 0)
			cout << "YES" << nl;
		else
			cout << "NO" << nl;
	}
}