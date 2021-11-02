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
        int n, h;
        cin >> n >> h;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int x = arr[n - 1], y = arr[n - 2];
        int sum = x + y;

        if (h % sum == 0) cout << 2 * (h / sum) << nl;
        else if (h % sum <= x) cout << 2 * (h / sum) + 1 << nl;
        else cout << 2 * (h / sum) + 2 << nl; 
    }   
}