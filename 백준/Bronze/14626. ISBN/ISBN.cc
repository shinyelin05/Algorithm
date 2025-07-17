#include <iostream>
#include <string>
using namespace std;

int main() {
    string isbn;
    cin >> isbn;

    int starIdx = -1;
    int sum = 0;

    for (int i = 0; i < 13; ++i) {
        if (isbn[i] == '*') {
            starIdx = i;
            continue;
        }
        int num = isbn[i] - '0';
        sum += (i % 2 == 0) ? num : num * 3;
    }

    int weight = (starIdx % 2 == 0) ? 1 : 3;

    for (int x = 0; x <= 9; ++x) {
        int total = sum + weight * x;
        if (total % 10 == 0) {
            cout << x;
            return 0;
        }
    }

    return 0;
}
