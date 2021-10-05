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

int main() {
    speedio;

    tlp {    
        int n;
        cin >> n;
        vi v(n);
        rep(i, 0, n)
            cin >> v[i];
        sort(v.begin(), v.end());
        ll total = accumulate(v.begin(), v.end(), 0);
        if (total % n == 0) {  
            ll avg = total / n;      
            ll dif = 0, count = 0;
            for (int i = n-1; i>=0; i--) {
                if (v[i] > avg) {
                    dif = v[i] - avg;
                    count++;
                }
                else
                    break;
            }
            cout << count << nl;
        }
        else
            cout << -1 << nl;
    }
}