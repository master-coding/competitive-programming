#include <bits/stdc++.h>
using namespace std;

const long long int m = 1e9+7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        if (a % b != 0) {
            int num = a % b;
            count = count + b-num;
        }
        cout << count << endl;
    }
    return 0;
}