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
    int totalSeats = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSeats += arr[i];
    }
    int aliceSeats = arr[0];
    vector <int> ans;
    ans.push_back(1);
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[0] / 2) {
            ans.push_back(i + 1);
            aliceSeats += arr[i];
        }
    }  
    if (aliceSeats > totalSeats / 2) {
        cout << ans.size() << nl;
        for (const int &val: ans)
            cout << val << ' ';
    }
    else cout << 0 << nl;
}