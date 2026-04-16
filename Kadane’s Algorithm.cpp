#include <iostream>
using namespace std;

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = 9;

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);

        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;

    return 0;
}