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
    int pos = 0, neg = 0;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > 0) pos += x;
        else neg += x;
    }   
    cout << ceil(abs((pos + neg)) / (double)m) << nl;
}