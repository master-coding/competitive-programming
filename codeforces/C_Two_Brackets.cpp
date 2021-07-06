// https://codeforces.com/problemset/problem/1452/C

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
        int count = 0;
        int c1 = 0, c2 = 0; // c1 = (  c2 = [
        rep(i, 0, s.length()) {
            if (s[i] == '(') {
                c1++;
            }
            else if (s[i] == '[') {
                c2++;
            }
            else if (s[i] == ')' && c1 > 0) {
                c1--;
                count++;
            }
            else if (s[i] == ']' && c2 > 0) {
                c2--;
                count++;
            }
        }
        cout << count << nl;
    }
}