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


bool solve(int a[], int b[], int n, int x) {
    int j = n - 1;
    for (int i = 0; i < n; i++) {
        if (a[i] + b[j] > x)
            return false;
        j--;
    }
    return true;
}

int main() {
    speedio;
    tlp {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        if (solve(a, b, n, x))
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }   
}