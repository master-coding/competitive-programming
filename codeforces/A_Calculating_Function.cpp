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



int main() {
    speedio;
    
    ll n;
    cin >> n;
    ll even, odd; 
    if (n % 2 == 0) {
        ll x = n/2;
        even = x * (x + 1);
        odd = x * x;

        cout << even - odd << nl;
    }
    else {
        ll x = n /2;
        even = x * (x + 1);
        odd = (x + 1)*(x + 1);
        cout << even - odd << nl;
    }

}