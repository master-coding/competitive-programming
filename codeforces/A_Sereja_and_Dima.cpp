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
    int n; cin >> n;
    int seeraj = 0, dima = 0;
    int left = 0, right = n - 1;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pos = 0;
    while (left <= right) {
        if (pos % 2 == 0) {
            if (arr[left] > arr[right]) {
                seeraj += arr[left];
                left++;
            }
            else {
                seeraj += arr[right];
                right--;
            }
            pos++;
        }
        else {
            if (arr[left] > arr[right]) {
                dima += arr[left];
                left++;
            }
            else {
                dima += arr[right];
                right--;
            }
            pos++;
        }
    }
    cout << seeraj << ' ' << dima << nl;
}