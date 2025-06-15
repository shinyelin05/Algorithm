#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string answer;
    cin >> answer;
    
    for (int i = 0; i < answer.size(); i++)
    {
        if (isupper(answer[i]))
        {
            answer[i] = tolower(answer[i]);
        }
        else
        {
            answer[i] = toupper(answer[i]);
        }
    }
    
    cout << answer;

    return 0;
}
