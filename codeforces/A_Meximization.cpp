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
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int ans[n], j = n - 1, k = 0;
        ans[0] = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] == ans[k]) {
                ans[j] = arr[i];
                j--;
            }
            else {
                ans[k + 1] = arr[i];
                k++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        newline;
    }   
}