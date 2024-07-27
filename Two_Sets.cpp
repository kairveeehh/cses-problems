#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ts = n * (n + 1) / 2;
    if (ts % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    vector<int> a, b;
    long long sum = ts / 2;

    for (long long i = n; i > 0; --i) {
        if (sum >= i) {
            a.push_back(i);
            sum -= i;
        } else {
            b.push_back(i);
        }
    }

    cout << a.size() << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    cout << b.size() << endl;
    for (int i : b) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
