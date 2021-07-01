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
        int n;
        cin >> n;
        int arr[n];
        unordered_map <int, int> m;
        rep(i, 0, n) {
            cin >> arr[i];
            m[arr[i]]++;
        }

        int element;
        for (auto value : m) {
            if (value.s == 1) {
                element = value.f;
                break;
            }
        }
        auto it = find(arr, arr + n, element) - arr;
        cout << ++it << nl;
    }   
}