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
    int r , c, count1 = 0, count2 = 0;
    cin >> r >> c;
    string s[r+3];
    for(int i=0; i<r; i++)
        cin >> s[i];

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(s[i][j]=='S') {
                count1++;
                break;
            }
        }
    }

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            if(s[j][i]=='S') {
                count2++;
                break;
            }
        }
    }

    cout << (r * c)-(count1 * count2) << nl;
}