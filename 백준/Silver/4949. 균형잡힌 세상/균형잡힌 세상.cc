#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true) {
        getline(cin, s);
        if (s == ".") break;

        stack<char> st;
        bool ok = true;

        for (char ch : s) {
            if (ch == '(' || ch == '[') {
                st.push(ch);
            } else if (ch == ')') {
                if (!st.empty() && st.top() == '(') st.pop();
                else { ok = false; break; }
            } else if (ch == ']') {
                if (!st.empty() && st.top() == '[') st.pop();
                else { ok = false; break; }
            }
        }

        if (ok && st.empty()) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
