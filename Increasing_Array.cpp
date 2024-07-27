#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long ct = 0; // Use long long to handle large sums
    for (int i = 1; i < n; ++i) { // Start from the second element
        if (arr[i] < arr[i - 1]) { // Check if the current element is less than the previous one
            ct += (long long)(arr[i - 1] - arr[i]); // Calculate the difference and add to ct
            arr[i] = arr[i - 1]; // Make the current element equal to the previous one
        }
    }

    cout << ct << endl;
    return 0;
}
