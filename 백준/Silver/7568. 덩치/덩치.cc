#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int weight[50], height[50], rank[50];

    for (int i = 0; i < N; ++i) {
        cin >> weight[i] >> height[i];
        rank[i] = 1;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;
            if (weight[i] < weight[j] && height[i] < height[j]) {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << rank[i] << ' ';
    }
    cout << '\n';

    return 0;
}
