#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define sp ' '
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define vi vector <int>
#define pii pair <int, int>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
	cout << fixed << setprecision(10);
	tlp {
		int n; cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
            
		int mx = v[0];
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > mx)
				mx = v[i];
			sum += v[i];
		}
		cout << 1.0 * (sum - mx) / (n - 1) + mx << endl;
	}

}
