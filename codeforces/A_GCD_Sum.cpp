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


ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

ll hcf(ll a, ll b) {
    if (a == 0) return b;
    else return hcf(b % a, a);
}

int main() {
    speedio;
    tlp {
        ll n; cin >> n;
        ll num = sumOfDigits(n);
        while (hcf(n, num) == 1) {
            n++;
            num = sumOfDigits(n);
        }
        cout << n << nl;
    }   
}
