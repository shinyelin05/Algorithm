#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string str;
        cin >> str;

        stack<char> s;
        bool isValid = true;

        for (char ch : str) {
            if (ch == '(') {
                s.push(ch);
            } else { // ch == ')'
                if (s.empty()) {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }

        if (!s.empty()) isValid = false;

        cout << (isValid ? "YES" : "NO") << '\n';
    }

    return 0;
}
