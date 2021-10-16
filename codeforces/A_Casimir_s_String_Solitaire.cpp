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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A') a++;
            else if (s[i] == 'B') b++;
            else c++;
        }
        if (b == a + c) yes;
        else no;
    }   
}