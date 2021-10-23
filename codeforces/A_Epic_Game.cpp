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
    int a, b, n;
    cin >> a >> b >> n;
    int i = 0;
    bool flag1;
    while (true) {
        if (i % 2 == 0) {
            int take = __gcd(a, n);
            if (take <= n) n -= take;
            else {
                flag1 = false;
                break;
            }
        }
        else {
            int take = __gcd(b, n);
            if (take <= n) n -= take;
            else {
                flag1 = true;
                break;
            }
        }
        i++;
    }
    if (flag1 == true) cout << "0" << nl;
    else if (flag1 == false) cout << "1" << nl;
}