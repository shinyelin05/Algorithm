#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 'a' + 'A';
        }
    }

    int alpha[26] = {0};

    for (int i = 0; i < word.size(); i++) {
        alpha[word[i] - 'A']++;
    }

    int maxCount = 0;
    int maxIndex = 0;
    bool isDuplicate = false;

    for (int i = 0; i < 26; i++) {
        if (alpha[i] > maxCount) {
            maxCount = alpha[i];
            maxIndex = i;
            isDuplicate = false;
        } else if (alpha[i] == maxCount) {
            isDuplicate = true;
        }
    }

    if (isDuplicate) {
        cout << "?" << '\n';
    } else {
        cout << char(maxIndex + 'A') << '\n';
    }

    return 0;
}
