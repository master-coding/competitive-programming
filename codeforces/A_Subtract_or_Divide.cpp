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
        if (n > 3) {
            if (n % 2)  cout << 3 << nl;
            else        cout << 2 << nl;
        }
        else if (n == 3)
            cout << 2 << nl;
        else if (n == 2)
            cout << 1 << nl;
        else
            cout << 0 << nl;
    }   
}