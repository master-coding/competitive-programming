// https://codeforces.com/problemset/problem/1462/C

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
        if (n <= 9)
            cout << n << nl;
        else if (n < 18)
            cout << n - 9 << 9 << nl;
        else if (n <= 24)
            cout << n - 17 << 8 << 9 << nl;
        else if (n <= 30)
            cout << n - 24 << 7 << 8 << 9 << nl;
        else if (n <= 35)
            cout << n - 30 << 6 << 7 << 8 << 9 << nl;
        else if (n <= 39)
            cout << n - 35 << 5 << 6 << 7 << 8 << 9 << nl;
        else if (n <= 42)
            cout << n - 39 << 4 << 5 << 6 << 7 << 8 << 9 << nl;
        else if (n <= 44)
            cout << n - 42 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << nl;
        else if (n == 45)
           cout << 123456789 << nl;
        else
            cout << -1 << nl;
    }
}