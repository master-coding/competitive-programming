// https://codeforces.com/problemset/problem/1397/A

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
        int n;
        cin >> n;
        int a[26] = {0};
        rep(i, 0, n) {
            string s;
            cin >> s;
            rep(i, 0, s.length()) {
                a[s[i] - 'a']++;
            }
        }
        bool flag = true;
        rep(i, 0, 26) {
            if (a[i] != 0) {
                if (a[i] % n) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true)
            yes;
        else
            no;
    }   
}