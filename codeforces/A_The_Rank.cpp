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

bool sortVector(pair <int, int> p1, pair <int, int> p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    return p1.first > p2.first;
}

int main() {
    speedio;
    int n; cin >> n;
    vector < pair <int, int> > v;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < 4; j++) {
            int score; cin >> score;
            total += score;
        }
        v.push_back({total, i + 1});
    }   
    sort(v.begin(), v.end(), sortVector);
    int count = 1;
    for (auto value : v) {
        if (value.second != 1) count++;
        else break;
    }
    cout << count << nl;
}