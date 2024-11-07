#include<iostream>
using namespace std;

int findunique(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int size;
    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++) {
        cout << "ENTER THE ELEMENT AT INDEX " << i << " : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "UNIQUE NUMBER IN THE ARRAY: " << findunique(arr, size) << endl;

    return 0;
}
