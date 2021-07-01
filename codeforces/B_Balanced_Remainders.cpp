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
        int c0 = 0, c1 = 0, c2 = 0; 
        rep(i, 0, n) {
            cin >> a[i];
            if (a[i] % 3 == 1) c1++;
            else if (a[i] % 3 == 2) c2++;
            else c0++; 
        }

        int sum = 0;
        int avg = (c0 + c2 + c1) / 3;
        if (c0 == c1 && c1 == c2 && c2 == c0)
            cout << 0 << nl;
        else {
            while (c0 != c1 || c1 != c2 || c2 != c0) {
                if (c0 > avg) {
                    sum += (c0 - avg);
                    c1 += (c0 - avg);
                    c0 = avg;
                }
                if (c1 > avg) {
                    sum += (c1 - avg);
                    c2 += (c1 - avg);
                    c1 = avg;
                }
                if (c2 > avg) {
                    sum += (c2 - avg);
                    c0 += (c2 - avg);
                    c2 = avg;
                }
            }
            cout << sum << nl;
        }
    }   
}