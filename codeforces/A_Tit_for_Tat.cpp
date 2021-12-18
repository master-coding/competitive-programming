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



void solve(int arr[], int n, int k) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < k) {
            k -= arr[i];
            arr[n - 1] += arr[i];
            arr[i] = 0;
        }
        else {
            arr[i] -= k;
            arr[n - 1] += k;
            k = 0;
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}


int main() {
    speedio;
    tlp {
        int n, k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        solve(arr, n, k);
        printArray(arr, n);
        newline;
    }    
}