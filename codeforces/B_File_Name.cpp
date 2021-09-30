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


int mt1(string s, int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (s[i] == 'x' && s[i - 1] == 'x' && s[i - 2] == 'x') {
            count++;
            s.erase(s.begin() + i);
            i = 1;
        }
    }
    return count;
}

// optimized solution with time complexity : O(n)
int mt2(string s, int n) {
    int ans = 0, countX = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            countX++;
            if (countX > 2) ans++;
        }
        else countX = 0;
    }
    return ans;
}

int main() {
    speedio;
    int n; cin >> n;
    string s;
    cin >> s;
    // cout << mt1(s, n) << nl;
    cout << mt2(s, n) << nl;
}