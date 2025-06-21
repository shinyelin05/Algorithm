#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int layer = 1;   // 첫 번째 층은 무조건 포함됨
    int room = 1;    // 시작 방 번호

    while (N > room) {
        room += 6 * layer;  // 다음 층에 해당하는 방 수 더함
        layer++;
    }

    cout << layer << endl;
    return 0;
}
