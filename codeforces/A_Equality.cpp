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
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int arr[k];
    fill(arr, arr + k, 0);
    for (int i = 0; i < n; i++) {
        arr[s[i] - 'A'] += 1;
    }   

    int minn = arr[0];
    for (int i = 1; i < k; i++)
        minn = min(arr[i], minn);

    cout << minn * k << nl;
}