#include <iostream>
#include <string>
using namespace std;

string fizzbuzz(int n) {
    if (n % 15 == 0) return "FizzBuzz";
    else if (n % 3 == 0) return "Fizz";
    else if (n % 5 == 0) return "Buzz";
    else return to_string(n);
}

int main() {
    string s[3];
    for (int i = 0; i < 3; ++i) cin >> s[i];

    for (int i = 0; i < 3; ++i) {
        bool is_num = true;
        for (char c : s[i]) {
            if (!isdigit(c)) {
                is_num = false;
                break;
            }
        }
        if (is_num) {
            int num = stoi(s[i]);
            int next = num + (3 - i);
            cout << fizzbuzz(next) << '\n';
            break;
        }
    }
    return 0;
}
