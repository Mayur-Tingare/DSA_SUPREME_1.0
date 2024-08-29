#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to find all pairs in an array whose sum lies within l and r
vector<vector<int>> findPairs(int arr[], int n, int l, int r) {
    // Sort the array
    sort(arr, arr+n);

    // Initialize a vector to store all pairs
    vector<vector<int>> pairs;

    // Iterate over the array
    for (int i = 0; i < n; i++) {
        // Initialize a pointer to search for the required sum
        int j = i+1;

        // Find the required sum
        while (j < n && arr[i] + arr[j] <= r) {
            if (arr[i] + arr[j] >= l) {
                // If the sum lies within l and r, add the pair to the vector
                pairs.push_back({arr[i], arr[j]});
            }
            j++;
        }
    }

    // Return the vector of pairs
    return pairs;
}

// Driver function to test the above function
int main() {
    int arr[] = {6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 7, r = 10;
    vector<vector<int>> pairs = findPairs(arr, n, l, r);
    // cout << "The pairs are:" << endl;
    // for (auto it = pairs.begin(); it != pairs.end(); it++) {
    //     cout << "(" << (*it)[0] << ", " << (*it)[1] << ")" << endl;
    // }

    cout<<pairs.size();

    return 0;
}