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
#define first f
#define second s
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    tlp {
        int n, minn = INT_MAX;
        cin >> n;
        int a[n];
        rep(i, 0, n) {
            cin >> a[i];
            if (a[i] < minn)
                minn = a[i];
        }
        
        cout << (n - 1) * 1LL * minn << nl;
    }   
}