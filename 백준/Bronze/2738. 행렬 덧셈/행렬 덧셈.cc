#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int x, y;
    cin >> x;
    cin >> y;
    
    int array1[x][y];
    int array2[x][y];
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int answer;
            cin >> answer;
            array1[i][j] = answer;
        }
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            int answer;
            cin >> answer;
            array2[i][j] = answer;
        }
    }
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << array1[i][j] + array2[i][j] << ' ';
        }
        cout << '\n';  // i 한 번 돌고 나면 줄바꿈
    }

    return 0;
}
