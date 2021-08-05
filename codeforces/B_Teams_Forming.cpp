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


int method1(int arr[], int n) {
    map <int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    
    vi v;
    for (auto value : m) {
        if (value.second % 2 != 0) {
            v.pb(value.first);
        }
    }
    int count = 0;
    for (int i = 0; i < v.size(); i+=2) {
        count += v[i + 1] - v[i];
    }
    return count;
}

int method2(int arr[], int n) {
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i+=2)
        count += arr[i + 1] - arr[i];
    return count;
}

int main() {
    speedio;
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << method2(arr, n);
}