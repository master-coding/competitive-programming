// https://codeforces.com/problemset/problem/1382/A

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


// we just need to check if an element is present in both of them
// smallest subsequence is always 1
int main() {
    speedio;
    tlp {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        rep(i, 0, n)
            cin >> a[i];
        rep(i, 0, m)
            cin >> b[i];
        
        sort(a, a + n);
        sort(b, b + m);
        bool flag = true;
        rep(i, 0, n) {
            if (binary_search(b, b + m, a[i])) {
                yes;
                cout << 1 << sp << a[i] << nl;
                flag = false;
                break;

            }
        }
        if (flag)
            no;

    }   
}