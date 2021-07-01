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
#define first f
#define second s
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;

    tlp {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        rep(i, 0, n)
            cin >> a[i];
        rep(i, 0, n)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int i = 0, j = n - 1;
        while (k-- && i < n) {
            if (a[i] < b[j]) {
                swap(a[i], b[j]);
            }
            i++;
            j--;
        }
        cout << accumulate(a, a + n, 0) << nl;
    }   
}