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


int ans(string s, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (s[i] > '1') {
                flag = true;
                s[i]--;
            }
        }
        if (flag == true) {
            count++;
            i = -1;
        }
        else 
            return count;
    }
    return count;
}

int main() {
    speedio;
    tlp {
        string s;
        cin >> s;
        int n = s.length();
        cout << ans(s, n) + 1 << nl;
    }   
}