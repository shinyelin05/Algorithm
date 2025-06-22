#include <iostream>
#include <cmath>
using namespace std;

int digit_sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int d = to_string(N).length();
    int start = max(1, N - 9 * d);

    for (int i = start; i < N; ++i) {
        if (i + digit_sum(i) == N) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
