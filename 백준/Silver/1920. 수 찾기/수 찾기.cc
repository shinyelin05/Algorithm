#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int A[100001];
int num;

bool binary_search(int target) {
    int left = 0;
    int right = N - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (A[mid] == target) {
            return true;
        } else if (A[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (binary_search(num))
            cout << "1\n";
        else
            cout << "0\n";
    }

    return 0;
}
