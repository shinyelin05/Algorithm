#include <iostream>
#include <string>
using namespace std;

int Calc(int a, int b)
{
    return (a + b) * ( a-b);
}

int main() {
    int a, b;
    
    cin >> a;
    cin >> b;
    
    cout << Calc(a, b);
    return 0;
}
