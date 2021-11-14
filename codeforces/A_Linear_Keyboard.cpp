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
        string s1, s2;
        cin >> s1 >> s2;
        map <char, int> m;
        for (int i = 0; i < s1.length(); i++)
            m[s1[i]] = i + 1;
        
        int ans = 0;
        for (int i = 1; i < s2.length(); i++) {
            ans += abs(m[s2[i]] - m[s2[i - 1]]); 
        }
        cout << ans << nl;
    }   
}