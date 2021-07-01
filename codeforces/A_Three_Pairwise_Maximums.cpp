// Problem link
// https://codeforces.com/problemset/problem/1385/A

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
        int a[3];
        rep(i, 0, 3) 
            cin >> a[i];
        sort(a, a + 3);
        if (a[1] != a[2]) {
            no;
        }
        else {
            yes;
            cout << a[0] << sp << a[0] << sp << a[2] << nl;
        }
        
    }   
}