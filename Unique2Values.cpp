#include <iostream>
using namespace std;

void findUniqueElements(int arr[], int n) {
    int xor_sum = 0;
    for (int i = 0; i < n; i++) {
        xor_sum ^= arr[i];
    }
    int set_bit_no = xor_sum & ~(xor_sum - 1);

    
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & set_bit_no) {
            x ^= arr[i]; 
        } else {
            y ^= arr[i]; 
        }
    }

    cout << "The two unique elements are: " << x << " and " << y << endl;
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
    findUniqueElements(arr, size);
    return 0;
}