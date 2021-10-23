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
    int n; cin >> n;
    vector <string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    bool isPossible = false;
    for (int i = 0; i < n; i++) {
        if (s[i][0] == 'O' and s[i][1] == 'O') {
            isPossible = true;
            s[i][0] = s[i][1] = '+';
            break;
        }
        else if (s[i][3] == 'O' and s[i][4] == 'O') {
            isPossible = true;
            s[i][3] = s[i][4] = '+';
            break;
        }
    }
    if (isPossible)  {
        yes;
        for (int i = 0; i < n; i++)
            cout << s[i] << nl;   
    }
    else no;

}