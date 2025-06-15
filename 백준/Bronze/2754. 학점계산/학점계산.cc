#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string answer;
    cin >> answer;
    
    if (answer == "A+")
    {
        cout << 4.3;
    }
    else if (answer == "A0")
    {
        cout << "4.0";
    }
    else if (answer == "A-")
    {
        cout << 3.7;
    }
    else if (answer == "B+")
    {
        cout << 3.3;
    }
    else if (answer == "B0")
    {
        cout << "3.0";
    }
    else if (answer == "B-")
    {
        cout << 2.7;
    }
    else if (answer == "C+")
    {
        cout << 2.3;
    }
    else if (answer == "C0")
    {
        cout << "2.0";
    }
    else if (answer == "C-")
    {
        cout << 1.7;
    }
    else if (answer == "D+")
    {
        cout << 1.3;
    }
    else if (answer == "D0")
    {
        cout << "1.0";
    }
    else if (answer == "D-")
    {
        cout << 0.7;
    }
    else if (answer == "F")
    {
        cout << "0.0";
    }

    return 0;
}
