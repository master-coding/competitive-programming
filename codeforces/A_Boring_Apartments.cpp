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
        int no_digits = floor(log10(n) + 1);
        int last_digit = n % 10;
        int count =  (last_digit - 1) * 10;
        if (no_digits == 1)
            cout << count + 1 << nl;
        else if (no_digits == 2)
            cout << count + 3 << nl;
        else if (no_digits == 3)
            cout << count + 6 << nl;
        else
            cout << count + 10 << nl;
    }
}