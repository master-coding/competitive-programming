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

int solve(int arr[], int n, int maxx) {
    int count = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (arr[i] >= maxx) {
                count++;
            }
        }
        if (maxx <= count) {return maxx; } 
        else {
            maxx--;
            count = 0;
        }
    }
    // return 1;
}

int main() {
    speedio;
    tlp {
        int n; cin >> n;
        int arr[n];
        int maxx = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxx = max(arr[i], maxx);
        }
        
        cout << solve(arr, n, maxx) << nl;
    }   
}