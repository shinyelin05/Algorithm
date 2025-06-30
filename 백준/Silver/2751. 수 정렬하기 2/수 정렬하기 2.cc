#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // 오름차순

    for (int i = 0; i < N; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}

