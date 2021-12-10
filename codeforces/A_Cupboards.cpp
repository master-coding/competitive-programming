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
    int n; cin >> n;
    int lOpen = 0, lClosed = 0, rOpen = 0, rClosed = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a == 0) lOpen++;
        else lClosed++;

        if (b == 0) rOpen++;
        else rClosed++;
    }   
    cout << min(lOpen, lClosed) + min(rOpen, rClosed) << nl;
}