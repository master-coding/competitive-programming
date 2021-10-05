#include <bits/stdc++.h>
using namespace std;

#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define wlp(tc) while(tc--)
#define flp(i, a, b) for(int i = a; i < b; i++)
#define sp ' '
#define nl '\n'
#define ll long long int


int  main() {
    speedio;
    int limak, bob;
    cin >> limak >> bob;
    int year = 0;
    while (limak <= bob) {
        limak = limak * 3;
        bob = bob * 2;
        year ++;
    }
    cout << year << nl;
    
}