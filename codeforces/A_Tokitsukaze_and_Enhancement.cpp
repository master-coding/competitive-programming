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
    int x; cin >> x;
    if (x % 4 == 2) cout << 1 << ' ' << 'B' << nl;
    else if (x % 4 == 1) cout << 0 << ' ' << 'A' << nl;
    else if (x % 4 == 0) cout << 1 << ' ' << 'A' << nl;
    else cout << 2 << ' ' << 'A' << nl;
}