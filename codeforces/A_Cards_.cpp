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

bool sortArray(pair <int, int> p1, pair <int, int> p2) {
    return p1.first < p2.first;
}

int main() {
    speedio;
    int n; cin >> n;
    vector < pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end(), sortArray);
    int left = 0, right = n - 1;
    while (left < right) {
        cout << v[left].second << ' ' << v[right].second << nl;
        left++, right--;
    }

}