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
        int n;
        cin >> n;
        int a[n + 1] = {0}, b[n + 1] = {0}, t[n + 1] = {0};
        rep(i, 1, n + 1) 
            cin >> a[i] >> b[i];
        rep(i, 1, n + 1)
            cin >> t[i];

        int a1[n + 1] = {0}, b1[n + 1] = {0};
        rep(i, 1, n + 1) {
            int val = ceil(((double)b[i] - (double)a[i]) / 2);
            a1[i] = b1[i - 1] + t[i] + a[i] - b[i - 1];
            b1[i] = max(a1[i] + val, b[i]);
        }
        // rep(i, 1, n + 1)
        //     cout << a1[i] << sp;
        // newline;
        // rep(i, 1, n + 1)
        //     cout << b1[i] << sp;
        // newline;
        cout << a1[n] << nl;
    }   
}