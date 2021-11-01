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
    int n; cin >> n;
    int arr[n];
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }   

    int cf = 1;
    for (auto it = m.rbegin(); it != m.rend(); it++) {
        int freq = it -> second;
        it -> second = cf;
        cf += freq;
    }

    for (int i = 0; i < n; i++) {
        cout << m[arr[i]] << ' ';
    }
    newline;
}