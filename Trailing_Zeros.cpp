//trailing zeroes k lie we res the number of times 5 and its powers area multiple of that nu mber 
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long res = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        res += n / i;
    }

    cout << res << endl;
    return 0;
}
