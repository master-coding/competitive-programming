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
    int arr[n];
    set <int> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    if (s.size() < k) {
        no;
    }
    else {
        yes;
        set <int> s1;
        for (int i = 0; i < n; i++) {
            if (k != 0) {
                if (s1.count(arr[i]) == 0) {
                    cout << i + 1 << ' ';
                    s1.insert(arr[i]);
                    k--;
                }
            }
            else
                break;
        }

    }
}