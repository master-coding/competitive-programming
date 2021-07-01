// Problem link
// https://codeforces.com/problemset/problem/1294/A

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
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int arr[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        sort(arr, arr + 3);
        /*First the number of coins of arr[0] and arr[1] should be equal to arr[2]
        and then the remaining coins should be equally distribued between the 3 */
        int diff1 = arr[2] - arr[0];
        int diff2 = arr[2] - arr[1];
        if (diff1 + diff2 <= n) {
            if ((n - diff1 - diff2) % 3 == 0)
                yes;
            else
                no;
        }
        else
            no;
    }   
}