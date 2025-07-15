#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    cin >> M;

    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;

        auto lower = lower_bound(cards.begin(), cards.end(), num);
        auto upper = upper_bound(cards.begin(), cards.end(), num);

        cout << upper - lower << " ";
    }

    cout << '\n';

    return 0;
}
