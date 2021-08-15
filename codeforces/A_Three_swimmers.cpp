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
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        if (p % a == 0 || (p % b == 0 || p % c == 0))
            cout << 0 << nl;
        else {
            ll mina, minb, minc;
            if (p < a)  mina = a - p;
            else mina = a - p % a; 
            if (p < b)  minb = b - p;
            else minb = b - (p % b); 
            if (p < c)  minc = c - p;
            else minc = c - p % c;
            cout << min(mina, min(minb, minc)) << nl;
        }
    }
}   