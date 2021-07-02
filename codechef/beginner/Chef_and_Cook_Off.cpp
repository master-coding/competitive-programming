// https://www.codechef.com/problems/CCOOK

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
        char a[5];
        int count = 0;
        rep(i, 0, 5) {
            cin >> a[i];
            if (a[i] == '1')
                count++;
        }

        if (count == 0)
            cout << "Beginner" << nl;
        else if (count == 1)
            cout << "Junior Developer" << nl;
        else if (count == 2)
            cout << "Middle Developer" << nl;
        else if (count == 3)
            cout << "Senior Developer" << nl;
        else if (count == 4)
            cout << "Hacker" << nl;
        else
            cout << "Jeff Dean" << nl;        
    }   
}