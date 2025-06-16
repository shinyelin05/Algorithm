#include <iostream>
using namespace std;

long long Calc(int a, int b) {
    return static_cast<long long>(a + b) * (a - b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << Calc(a, b) << endl;
    return 0;
}
