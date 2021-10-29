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

bool same(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1])
            return false;
    }
    return true;
}

int maxElementIndex(int a[], int n, int maxx) {
    if (a[0] == maxx and a[1] != maxx) return 0;
    else if (a[n - 1] == maxx and a[n - 2] != maxx) return n - 1;
    else {
        for (int i = 1; i < n - 1; i++) {
            if ((a[i] == maxx and a[i - 1] != maxx) or (a[i] == maxx and a[i + 1] != maxx))
                return i;
        }
    }
    return -3;
}

int main() {
    speedio;
    tlp {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxx = *max_element(a, a + n);
        if (same(a, n)) cout << -1 << nl;
        else cout << maxElementIndex(a, n, maxx) + 1 << nl;
    }   
}