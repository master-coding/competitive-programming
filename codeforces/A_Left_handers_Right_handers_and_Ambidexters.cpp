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

int solve(int l, int r, int a) {
    int ans = 0;
    ans += 2 * min(l, r);
    int remaining = abs(l - r);
    if (remaining <= a) {
        ans += 2 * remaining;
        a = a - remaining;
        ans += 2 * (a / 2);
    }
    else {
        ans += 2 * a;
    }


    return ans;
}

int main() {
    speedio;
    int l, r, a;
    cin >> l >> r >> a;

    cout << solve(l, r, a) << nl;
}   