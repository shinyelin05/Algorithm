#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;
    cin >> count;

    pair<int, int> arr[count];

    for (int i = 0 ; i < count; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + count, [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });

    for (int i = 0; i < count; i++)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }

    return 0;
}
