#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

char board[50][50];

int check(int x, int y) {
    int count1 = 0; // 'W' 시작
    int count2 = 0; // 'B' 시작

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // 현재 위치 색깔
            char current = board[x + i][y + j];
            // i+j가 짝수면 시작 색깔과 같아야 함
            if ((i + j) % 2 == 0) {
                if (current != 'W') count1++;
                if (current != 'B') count2++;
            } else {
                if (current != 'B') count1++;
                if (current != 'W') count2++;
            }
        }
    }

    return min(count1, count2);
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }

    int result = 64; // 최대 8x8 = 64

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            result = min(result, check(i, j));
        }
    }

    cout << result << '\n';

    return 0;
}
