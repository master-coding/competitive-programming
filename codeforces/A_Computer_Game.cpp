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
        int n; cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        bool reachable = true;
        for (int i = 1; i < n - 1; i++) {
            if (s1[i] == '1' and s2[i] == '1') {
                reachable = false;
                break;
            }
        }
        
        if (reachable) yes;
        else no;
    }   
}