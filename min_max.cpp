#include<iostream>
#include<climits>
using namespace std;

int getmin(int num[], int n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(num[i] < min) {
            min = num[i];
        }
    }
    return min;
}

int getmax(int num[], int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(num[i] > max) {  // Corrected condition
            max = num[i];
        }
    }
    return max;
}

int main() {
    int size;
    cout << "ENTER THE LENGTH OF ARRAY: ";
    cin >> size;
    int arr[size];
    
    for(int i = 0; i < size; i++) {
        cout << "ENTER THE ELEMENT: ";
        cin >> arr[i];
    }
    cout << "Maximum value of array: " << getmax(arr, size) << endl;
    cout << "Minimum value of array: " << getmin(arr, size) << endl;
    
    return 0;
}