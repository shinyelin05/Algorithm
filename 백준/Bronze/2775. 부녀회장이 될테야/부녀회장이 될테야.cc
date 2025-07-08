#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    // 최대 14층, 14호까지 있으므로 15x15 배열 선언
    int people[15][15] = {0};

    // 0층 초기화: 0층의 i호에는 i명이 거주
    for (int i = 1; i <= 14; ++i) {
        people[0][i] = i;
    }

    // DP 테이블 구성
    for (int k = 1; k <= 14; ++k) {
        for (int n = 1; n <= 14; ++n) {
            people[k][n] = people[k][n - 1] + people[k - 1][n];
        }
    }

    // 테스트 케이스 처리
    while (T--) {
        int k, n;
        cin >> k >> n;
        cout << people[k][n] << endl;
    }

    return 0;
}
