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

int ans(int a, int b) {
    if (a == 0 && b == 0) return 0;
    if (a == b) return 1;
    if (abs(a - b) % 2 == 0) return 2;
    return -1;
}

int main() {
    speedio;
    tlp {
        int a, b;
        cin >> a >> b;
        cout << ans(a, b) << nl;
    }   
}