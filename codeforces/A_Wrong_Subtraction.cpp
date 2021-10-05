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
    int num, k;
    cin >> num >> k;
    wlp(k) {
        int last = num % 10;
        if (last > 0)
            num = num - 1;
        else
            num = num / 10;           
    }
    cout << num;

} 