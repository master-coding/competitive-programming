// https://codeforces.com/problemset/problem/686/A

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
    ll n, x;
    cin >> n >> x;
    ll distressed = 0;
    for (int i = 0; i < n; i++) {
        char symbol;
        ll value;
        cin >> symbol >> value;
        if (symbol == '+') {
            x += value;
        }
        else {
            if (x >= value) {
                x -= value;
            }
            else
                distressed++;
        }
    }
    cout << x << sp << distressed << nl;   
}