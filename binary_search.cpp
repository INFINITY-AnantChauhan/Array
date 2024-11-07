#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element you want to find: ";
    cin >> key;
    int result = binarysearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}