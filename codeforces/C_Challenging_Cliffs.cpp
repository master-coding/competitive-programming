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
        int n;
        cin >> n;
        int a[n];
        rep(i, 0, n)
            cin >> a[i];
        
        sort(a, a+n);
        int minn = INT_MAX;
        rep(i, 1, n) {
            if (a[i] - a[i-1] < minn) {
                minn = a[i] - a[i-1];
            }
        }

        rep(i, 1, n) {
            if (a[i] - a[i-1] == minn) {
                cout << a[i-1] << sp;
                rep(j, i+1, n) {
                    cout << a[j] << sp;
                }
                rep(j, 0, i-1) {
                    cout << a[j] << sp;
                }
                cout << a[i] << sp;
                break;
            }
        }
        newline;
    }

}