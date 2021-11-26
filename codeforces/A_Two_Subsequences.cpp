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

string substring(string s,int start, int end) {
    string res = "";
    for (int i = start; i < end; i++) {
        res.push_back(s[i]);
    }
    return res;
}

int main() {
    speedio;
    tlp {
        string s; cin >> s;
        int minn = s[0], minindex = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] < minn) {
                minn = s[i];
                minindex = i; 
            }
        }

        cout << (char)minn << ' ' << substring(s, 0, minindex) << substring(s, minindex + 1, s.length()) << nl;
    }   
}