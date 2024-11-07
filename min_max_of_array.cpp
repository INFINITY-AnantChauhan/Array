#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter the element: ";
        cin >> arr[i];
    }
    int maxNO = INT_MIN;
    int minNO = INT_MAX;
    for(int i = 0; i < n; i++){
        maxNO = max(maxNO, arr[i]);
        minNO = min(minNO, arr[i]);
    }
    cout << maxNO << " is the maximum\n" << minNO << " is the minimum\n";
    return 0;
}