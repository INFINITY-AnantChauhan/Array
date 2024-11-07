#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of aray   ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}