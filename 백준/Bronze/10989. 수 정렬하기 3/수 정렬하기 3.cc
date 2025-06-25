#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count[10001] = {0};  // 숫자 1~10000 등장 횟수 저장

    int input;
    for (int i = 0; i < n; i++) {
        cin >> input;
        count[input]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}
