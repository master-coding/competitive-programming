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

int main() {
    speedio;
    tlp {
        int n, m;
        cin >> n >> m;
        ll count = 0;
        int football[n], cricket[m];
        rep(i, 0, n) {
            cin >> football[i];
        }
        rep(i, 0, m) {
            cin >> cricket[i];
        }
        int i = 0, j = 0;
        while(i != n-1 &&  j != m-1) {
            if (football[i] < cricket[j]) {
                i++;
            }
            else {
                count++;
                j++;
            }
        }
        cout << count << nl;
    }

}