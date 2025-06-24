#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int num = 1;
    int gcd = 1;

    int limit = (a < b) ? a : b; // 더 작은 수까지만 검사

    while (num <= limit) {
        if (a % num == 0 && b % num == 0) {
            gcd = num; // 공약수면 저장 (가장 마지막 값이 최대공약수)
        }
        num++;
    }

    int lcm = a * b / gcd;

    cout << gcd << '\n';
    cout << lcm << '\n';

    return 0;
}
