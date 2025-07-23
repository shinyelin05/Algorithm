#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> company;

    for (int i = 0; i < n; i++) {
        string name, cmd;
        cin >> name >> cmd;

        if (cmd == "enter") {
            company.insert(name);
        } else if (cmd == "leave") {
            company.erase(name);
        }
    }

    vector<string> result(company.begin(), company.end());
    sort(result.begin(), result.end(), greater<string>());  

    for (const auto &name : result) {
        cout << name << '\n';
    }

    return 0;
}
