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
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    int d; cin >> d;

    sort(arr, arr + 3);
    int ans = 0;
    if (arr[1] - arr[0] < d) {
        int dis = d - (arr[1] - arr[0]);
        ans += dis;
        arr[0] -= dis;
    }  
    if (arr[2] - arr[1] < d) {
        int dis = d - (arr[2] - arr[1]);
        ans += dis;
        arr[2] += dis;
    }
    if (arr[2] - arr[0] < d) {
        int dis = d - (arr[3] - arr[0]);
        ans += dis;
        arr[0] -= dis;
    }
    cout << ans << nl;
}