// https://codeforces.com/contest/144/problem/A

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
    int n;
    cin >> n;
    int  maxx = INT_MIN, minn = INT_MAX;
    int maxCount, minCount;
    int a[n];
    rep(i, 0, n) {
        cin >> a[i];
        if (a[i] <= minn) {
            minCount = i;
            minn = a[i];
        }
        if (a[i] > maxx) {
            maxCount = i;
            maxx = a[i];
        }
    }

    n = n - 1;
    if (maxCount > minCount) {
        // cout << maxCount << sp << minCount << nl;
        cout << maxCount + n - 1 - minCount << nl;
    }
    else {
        // cout << maxCount << sp << minCount << nl;
        cout << maxCount + n - minCount << nl;
    }
}