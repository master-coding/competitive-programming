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
    int n; cin >> n;
    int arr[2 * n];
    int ans = 0, onTable = 0;
    set <int> s;
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
        if (s.find(arr[i]) == s.end()) {
            onTable++;
            ans = max(ans, onTable);
            s.insert(arr[i]);
        }
        else {
            onTable--;
            s.erase(arr[i]);
        }
    }   
    cout << ans << nl;
}