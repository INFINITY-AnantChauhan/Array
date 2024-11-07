#include<iostream>
using namespace std;
void printarray( int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}
int main()
{int size;
    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cout << "ENTER THE ELEMENT AT INDEX " << i << " : ";
        cin >> arr[i];
    }cout<<endl;
    cout<<"ARRAY BEFOR SWAP ";
    printarray(arr,size);
    cout<<"ARRAY AFTER SWAP ";
    swap(arr,size);
    printarray(arr,size);
    return 0;
}