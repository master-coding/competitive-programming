#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int b[n];
    b[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        b[i] = a[i] + a[i + 1];
    }   

    for (const int &val: b)
        cout << val << ' ';
    
    newline;
}