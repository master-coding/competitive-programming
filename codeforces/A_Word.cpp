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
    string word;
    cin >> word;

    int countUpper = 0, countLower = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') countLower++;
        else countUpper++;
    }

    if (countUpper <= countLower) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                word[i] = word[i] + 32;
            }
        }
        cout << word << nl;
    }
    else {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                word[i] = word[i] - 32;
            }
        }
        cout << word << nl;
    }   
}