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
        int n, candies;
        cin >> n >> candies;
        int arr[n];
        rep(i, 0, n)
            cin >> arr[i];
        long long totalCandies = 0;
        bool flag = true;
        rep(i, 0, n) {
            totalCandies += arr[i];
            if (totalCandies > candies) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }   
}