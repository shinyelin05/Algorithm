#include <iostream>
#include <algorithm>
using namespace std;

bool Calc(int a, int b, int c)
{
    int sides[3] = {a, b, c};
    sort(sides, sides + 3);

    int ai = sides[0] * sides[0];
    int bi = sides[1] * sides[1];
    int ci = sides[2] * sides[2];

    return ai + bi == ci;
}

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        if (Calc(a, b, c))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}
