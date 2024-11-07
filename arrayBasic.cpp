#include<iostream>
using namespace std;
int main(){
    int n ,a;
    cout<<"enter th length of array and element of array";
    cin>>n>>a;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=a;
    }
    int sum =0;
    for(int i=0;i<n;i++){
        int b=arr[i];
        cout<<b<<" ";
        sum +=b;
    }
    cout<<endl<<"sum of array  ";
    cout<<sum<<endl;
    return 0;
}