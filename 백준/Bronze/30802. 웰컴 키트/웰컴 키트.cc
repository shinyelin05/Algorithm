#include <iostream>
using namespace std;

int main() {
    int n, t, p;
    int size[6];  // S, M, L, XL, XXL, XXXL
    
    cin >> n;
    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }
    cin >> t >> p;
    
    int totalShirtBundles = 0;
    
    for (int i = 0; i < 6; i++) {
        // 올림 나눗셈: (수 + 묶음 - 1) / 묶음
        int bundles = (size[i] + t - 1) / t;
        totalShirtBundles += bundles;
    }

    int penBundles = n / p;
    int penSingles = n % p;

    cout << totalShirtBundles << endl;
    cout << penBundles << " " << penSingles << endl;

    return 0;
}
