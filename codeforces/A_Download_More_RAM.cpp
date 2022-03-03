#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl


bool sortVOP(pair <int, int> p1, pair <int, int> p2) {
    if (p1.first == p2.first) {
        return p1.second > p2.second;
    }
    
    return p1.first < p2.first;
}


int main() {
    speedio;
    tlp {
        int n, k; cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector <pair<int, int>> v;
        for (int i = 0; i < n; i++)
            v.push_back({a[i], b[i]});

        sort(v.begin(), v.end(), sortVOP);

        int maxRam = k;
        for (int i = 0; i < n; i++) {
            if (v[i].first <= maxRam) {
                maxRam += v[i].second;
            }
            else break;

        }

        cout << maxRam << nl;
    }
}