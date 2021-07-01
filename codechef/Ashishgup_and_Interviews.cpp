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
        int n, k;
        cin >> n >> k;
        int a[n];
        int solved = n;
        ll time = 0, ones = 0;
        int slow = 0;
        rep(i, 0, n) {
            cin >> a[i];
            if (a[i] == -1) {
                solved--;
            }
            else {
                time += a[i];
            }
            if (a[i] == 1 || a[i] == 0)
                ones++;
            
            if (a[i] > k) {
                slow = 1;
            }
        }

        if (solved < ceil((n * 1.0) / 2))
            cout << "Rejected" << nl;
        else if (slow == 1)
            cout << "Too Slow" << nl;
        else if (ones == n)
            cout << "Bot" << nl;
        else 
            cout << "Accepted" << nl;
        
    }
}