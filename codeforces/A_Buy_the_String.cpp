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
    tlp {
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s; cin >> s;
        int count0 = 0, count1 = 0;
        rep(i, 0, n) {
            if (s[i] == '1') count1++;
            else count0++;
        }
        if (c0 == c1) {
            cout << c0 * n << nl;
        }
        else if (c0 > c1) {
            int total = 0;
            total += count1 * c1;
            int temp1 = count0 * c0;
            int temp2 = ((count0 * h) + (count0 * c1));
            cout << total + min(temp1, temp2) << nl;
        }
        else {
            int total = 0;
            total += count0 * c0;
            int temp1 = count1 * c1;
            int temp2 = ((count1 * h) + (count1 * c0));
            cout << total + min(temp1, temp2) << nl;
        }
    }   
}