#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num;
        total += num * num;
    }
    cout << (total % 10);
    return 0;
}
