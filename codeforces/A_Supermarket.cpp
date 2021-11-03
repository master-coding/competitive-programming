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
    int n, m; 
    cin >> n >> m;
    int x, y; cin >> x >> y;
    double ans = ((double)x / y) * m; 
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        double price = ((double)a / b) * m;
        ans = min(price, ans);
    }
    printf("%0.20f", ans);   
}