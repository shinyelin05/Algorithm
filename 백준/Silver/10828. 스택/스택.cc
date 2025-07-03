#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> stack;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            stack.push_back(x);
        } 
        else if (cmd == "pop") {
            if (stack.empty()) {
                cout << -1 << '\n';
            } else {
                cout << stack.back() << '\n';
                stack.pop_back();
            }
        } 
        else if (cmd == "size") {
            cout << stack.size() << '\n';
        } 
        else if (cmd == "empty") {
            cout << (stack.empty() ? 1 : 0) << '\n';
        } 
        else if (cmd == "top") {
            if (stack.empty()) {
                cout << -1 << '\n';
            } else {
                cout << stack.back() << '\n';
            }
        }
    }

    return 0;
}
