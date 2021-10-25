#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array - ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter = 1;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    }
    cout<<"The sorted array is - ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
