#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }   
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);

    a--; b--;
    int ans1 = 0, ans2 = 0;
    for (int i = a; i < b; i++) {
        ans1 += arr[i];
    }

    for (int i = b; i < n; i++) ans2 += arr[i];
    for (int i = 0; i < a; i++) ans2 += arr[i];
    cout << min(ans1, ans2) << nl;
}