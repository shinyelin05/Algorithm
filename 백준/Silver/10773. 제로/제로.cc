#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k;
    cin >> k;

    stack<int> s;

    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            // 0이면 가장 최근 숫자 하나 제거
            if (!s.empty()) {
                s.pop();
            }
        } else {
            // 0이 아니면 스택에 숫자 넣기
            s.push(num);
        }
    }

    int sum = 0;
    // 스택에 남은 숫자들 더하기
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << '\n';

    return 0;
}
