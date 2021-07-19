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
        int a[2 * n];
        int even = 0, odd = 0;
        rep(i, 0, 2 * n) {
            cin >> a[i];
            if (a[i] % 2)
                odd++;
            else 
                even++;
        }
        if ((odd == n) && (even == n))
            cout << "Yes" << nl;
        else
            cout << "No" << nl;

    }   
}