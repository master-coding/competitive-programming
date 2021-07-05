// https://codeforces.com/contest/1207/problem/A

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
// #define f first
// #define s second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    tlp {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        int buns = b/2;
        ll profit = 0;
        if (c > h) {
            if (f >= buns) {
                profit += buns * c;
            }
            else {
                profit += f * c;
                profit += min(buns - f, p) * h;
            }
        }
        else {
            if (p >= buns) {
                profit += buns * h;
            }
            else {
                profit += p * h;
                profit += min(buns - p, f) * c;
            }
        }
        cout << profit << nl;

    }   
}