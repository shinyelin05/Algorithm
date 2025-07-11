#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
    int order; // 가입 순서
};

bool compare(const Member &a, const Member &b) {
    return a.age < b.age;
}

int main() {
    int N;
    cin >> N;
    vector<Member> members(N);

    for (int i = 0; i < N; ++i) {
        cin >> members[i].age >> members[i].name;
        members[i].order = i;
    }

    stable_sort(members.begin(), members.end(), compare);

    for (const auto &member : members) {
        cout << member.age << ' ' << member.name << '\n';
    }

    return 0;
}
