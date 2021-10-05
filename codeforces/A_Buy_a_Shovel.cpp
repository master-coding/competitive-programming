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
    
    int k, n;
    cin >> k >> n;

    if (k % 10 == n || k % 10 == 0)
        cout << 1 << nl;
    else {
        int count;
        rep(i, 2, 11) {
            int value = k * i;
            if (value % 10 == n || value % 10 == 0) {
                count = i; break;
            }
        }
        cout << count << nl;
    }
}