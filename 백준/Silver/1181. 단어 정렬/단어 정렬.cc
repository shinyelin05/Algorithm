#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
bool compare(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    set<string> s; 

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        s.insert(word); 
    }

    vector<string> v(s.begin(), s.end()); 

    sort(v.begin(), v.end(), compare); 

    for (const auto &word : v) {
        cout << word << '\n';
    }

    return 0;
}
