#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    ll n, k; cin >> n >> k;
    ll diplomas = (n / 2) / (k + 1);
    cout << diplomas << ' ' << diplomas * k << ' ' << n - (diplomas * (k + 1)) << nl; 
}