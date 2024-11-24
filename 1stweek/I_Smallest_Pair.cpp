# include <bits/stdc++.h>
using namespace std;
int main(){
     int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Number of elements in the array

        int A[100]; // Array to store up to 100 elements (as per constraints)
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Initialize minimum values
        int minLeft = INT_MAX; // 20 0  0  0
        int result = INT_MAX;  //    22 11 7


        //20 1 9 4

        for (int j = 0; j < N; j++) { // 20 1 9 4
            // Compute A[j] + j
            int currentRight = A[j] + j; // 3+4 = 7

            // Update the result using the current minimum of (A[i] - i)
            if (j > 0) {
                result = min(result, currentRight + minLeft);
            }

            // Update the minimum of (A[i] - i)
            minLeft = min(minLeft, A[j] - j);
        }

        // Print the result for the current test case
        cout << result << endl; // 7
    }
    return 0;
}