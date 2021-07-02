// https://www.codechef.com/problems/PLAYPIAN

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
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.length(); i+=2) {
            if ((s[i] == 'A' && s[i + 1] == 'A') || (s[i] == 'B' && s[i + 1] == 'B')) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "yes" << nl;
        else
            cout << "no" << nl;
    }   
}
