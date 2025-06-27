#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long MOD = 1234567891;
    const int R = 31;

    int L;
    string str;
    cin >> L >> str;

    long long hash = 0;
    long long r = 1;  // R^0

    for (int i = 0; i < L; i++) {
        int val = str[i] - 'a' + 1;
        hash = (hash + val * r) % MOD;
        r = (r * R) % MOD;
    }

    cout << hash << "\n";
    return 0;
}
