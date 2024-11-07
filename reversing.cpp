#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    
    cout << "ARRAY BEFORE REVERSING: ";
    cout<<arr[size];

    reverse(arr, size);

    cout << "ARRAY AFTER REVERSING: ";
    printarray(arr, size);
    
    return 0;
}