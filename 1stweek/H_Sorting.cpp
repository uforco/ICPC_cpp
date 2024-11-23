# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    
    // 7 3 2 5
    // 2 3 7 5
    // 2 3 5 7
    // 0
    for (int i = 0; i < n - 1; i++) { // 2 < 3
        int minIndex = i; // 3
        for (int j = i + 1; j < n; j++) { // 3
            if (arr[j] < arr[minIndex]) { // 5 7
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}