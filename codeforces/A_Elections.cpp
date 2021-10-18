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


void solve(int arr[3]) {
    // if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
    //     cout << 1 << ' ' << 1 << ' ' << 1 << nl;
    //     return;
    // }

    int maxx = *max_element(arr, arr + 3);
    int countMax = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i] == maxx)
            countMax++;
    }
    if (countMax > 1) {
        for (int i = 0; i < 3; i++) {
            if (arr[i] != maxx)
                cout << maxx - arr[i] + 1 << ' ';
            else
                cout << 1 << ' ';
        }
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (arr[i] != maxx)
                cout << abs(maxx - arr[i]) + 1 << ' ';
            else
                cout << 0 << ' ';
        }
    }
    newline;

}

// second method for solving
int mt2(int best, int other1, int other2) {
    return max(0, max(other1, other2) - best + 1);
}

int main() {
    speedio;
    tlp {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        // solve(arr);
        cout << mt2(arr[0], arr[1], arr[2]) << ' ' 
             << mt2(arr[1], arr[0], arr[2]) << ' ' 
             << mt2(arr[2], arr[1], arr[0]) << nl;
    }   
}