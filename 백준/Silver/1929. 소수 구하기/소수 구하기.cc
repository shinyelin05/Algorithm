#include <iostream>
#include <cmath>
using namespace std;

bool arr[1000001]; // false: 소수, true: 소수 아님

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M >> N;

    arr[0] = arr[1] = true;

    for (int i = 2; i <= sqrt(N); i++) {
        if (!arr[i]) {
            for (int j = i * i; j <= N; j += i) {
                arr[j] = true;
            }
        }
    }

    for (int i = M; i <= N; i++) {
        if (!arr[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}
