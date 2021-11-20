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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int ae = 0, ao = 0, be = 0, bo = 0;
    rep(i, 0, n) {
        cin >> a[i];
        if (a[i] % 2) ao++;
        else ae++;
    }   
    rep(i, 0, m) {
        cin >> b[i];
        if (b[i] % 2) bo++;
        else be++;
    }   
    cout << min(ae, bo) + min(ao, be) << nl;
}