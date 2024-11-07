#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Array to store unique elements
    int uniqueArr[n];
    int uniqueCount = 0;

    // Iterate through each element in the original array
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if the element is already in the uniqueArr
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If the element is not found in uniqueArr, add it
        if (!isDuplicate) {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Output the unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueArr[i] << " ";
    }

    return 0;
}