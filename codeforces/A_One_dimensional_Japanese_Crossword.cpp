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


vector <int> solve(string s, int n) {
    vector <int> ans;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            int count = 0, j;
            for (j = i; j < n; j++) {
                if (s[j] == 'B') count++;
                else break;
            }
            ans.push_back(count);
            i = j;
        }
    }
    return ans;
}

int main() {
    speedio;
    int n; cin >> n;
    string s; cin >> s;

    vector <int> ans = solve(s, n);
    cout << ans.size() << nl;
    for (const int &value : ans)
        cout << value << ' ';   
}