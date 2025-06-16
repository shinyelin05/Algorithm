#include <iostream>
using namespace std;

int H, W, N;

int Calc()
{
    int floor = (N % H == 0) ? H : N % H;
    int room = (N % H == 0) ? N / H : N / H + 1;
    
    cout << floor;
    if (room < 10) cout << "0";
    cout << room << endl;
    
    return 0;
}

int main() {
    int count;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        cin >> H >> W >> N;
        Calc();
    }

    return 0;
}
