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
    int arr[n  - 1];
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];
    int a, b; 
    cin >> a >> b;
    // int diff = b - a;
    ll total = 0;
    for (int i = a - 1; i < b - 1; i++)
        total += arr[i];
    cout << total << nl;
}