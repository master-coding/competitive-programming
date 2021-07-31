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
        int a[n], b[n];
        rep(i, 0, n)
            cin >> a[i];
        rep(i, 0, n)
            cin >> b[i];
        
        int count = 0;
        if (a[0] - 0 >= b[0])
            count++;
        rep(i, 1, n) {
            if (a[i] - a[i - 1] >= b[i])
                count++;
        }
        cout << count << nl;
    }
}