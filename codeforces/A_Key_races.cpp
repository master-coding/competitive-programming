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
    int n, v1, v2, t1, t2;
    cin >> n >> v1 >> v2 >> t1 >> t2;
    int time1 = v1 * n + 2 * t1;
    int time2 = v2 * n + 2 * t2;
    if (time1 < time2) cout << "First" << nl;
    else if (time2 < time1) cout << "Second" << nl;
    else cout << "Friendship" << nl;
}