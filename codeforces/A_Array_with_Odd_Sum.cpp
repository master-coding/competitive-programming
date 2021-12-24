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
    tlp {
        int n; cin >> n;
        int sum = 0;
		bool odd = false, even = false;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
			odd |= x % 2 != 0;
			even |= x % 2 == 0;
		}
		if (sum % 2 != 0 || (odd && even)) yes;
		else no;
    }   
}