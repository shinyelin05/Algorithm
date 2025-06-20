#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int cards[100]; // 최대 카드 개수는 문제 조건에 따라 100
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int maxSum = 0;
    // 세 장의 카드 조합 모두 탐색
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
    }

    cout << maxSum << endl;
    return 0;
}

