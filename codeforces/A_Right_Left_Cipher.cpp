#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tlp int tc; cin >> tc; while (tc--)
#define nl '\n'
#define newline cout << '\n'
#define ll long long int

#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    speedio;
    string s; cin >> s;
    
    deque <char> dq;
    int left = 0, right = s.length() - 1;
    if (s.length() % 2) {
        dq.push_front(s[0]);
        left++;
    }   

    while(left < right) {
        char c = s[left], d = s[right];
        dq.push_front(d);
        dq.push_front(c);
        left++, right--;
    }
    
    for (const char &val : dq) cout << val; 
}