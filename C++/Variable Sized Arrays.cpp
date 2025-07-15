#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;  // Read number of variable-sized arrays and number of queries

    int** arr = new int*[n];  // Create an array of integer pointers (dynamic 2D array)

    // Input for the variable-sized arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;  // Read size of the current array
        arr[i] = new int[k];  // Allocate memory for 'k' elements
        
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];  // Read elements into the array
        }
    }

    // Processing queries
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;  // Read the query indices
        cout << arr[a][b] << endl;  // Output the required element
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];  // Delete each sub-array
    }
    delete[] arr;  // Delete the main array

    return 0;
}
