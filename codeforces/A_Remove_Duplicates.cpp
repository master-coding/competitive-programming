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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    set <int> s(arr, arr + n);
    cout << s.size() << nl;
    vector <int> v;
    for (int i = n - 1; i >= 0; i--) {
        if (s.count(arr[i])) {
            v.pb(arr[i]);
            s.erase(arr[i]);
        }
    }
    reverse(v.begin(), v.end());
    for (int x : v) cout << x << ' ';   
}