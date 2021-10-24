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

bool isSame(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    speedio;
    tlp {
        int n; cin >> n;
        int a[n], b[n];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum1 += a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sum2 += b[i];
        }

        vector <pair <int, int>> v;
        if  (sum1 == sum2) {
            while (true) {
                if (isSame(a, b, n) == false) {
                    int l, m;
                    for (int i = 0; i < n; i++) {
                        if (a[i] > b[i]) {
                            l = i;
                        }
                        else if (a[i] < b[i]) {
                            m = i;
                        }
                    }
                    a[l]--;
                    a[m]++;
                    v.push_back({l + 1, m + 1});
                }
                else { break; }
            }
            cout << v.size() << nl;
            for (auto value : v) {
                cout << value.first << ' ' << value.second << nl;
            }
        }
        else {
            cout << -1 << nl;
        }
    }   
}