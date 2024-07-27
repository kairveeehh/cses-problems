#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long res;

        if (y >= x) {
            if (y % 2 == 0) {
                res = y * y - x + 1;
            } else {
                res = (y - 1) * (y - 1) + x;
            }
        } else {
            if (x % 2 == 0) {
                res = (x - 1) * (x - 1) + y;
            } else {
                res = x * x - y + 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}
