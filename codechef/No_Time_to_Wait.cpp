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
    int n, h, x;
    cin >> n >> h >> x;
    int a[n];
    int maxx = INT_MIN;
    rep(i, 0, n) {
        cin >> a[i];
        if (a[i] > maxx)
            maxx = a[i];
    }
    if (x + maxx >= h)
        yes;
    else
        no;
    
}