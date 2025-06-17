#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B, C;
    cin >> A >> B >> C;

    // 1) 정수로 계산: A + B − C
    cout << stoi(A) + stoi(B) - stoi(C) << "\n";

    // 2) 문자열 결합 후 정수로 계산: (A + B) − C
    // A+B를 문자열로 이어붙이고 stoi로 정수 변환
    cout << stoi(A + B) - stoi(C) << "\n";

    return 0;
}
