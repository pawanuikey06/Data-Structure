#include<iostream>
using namespace std;

int main(){
    int arr[6];
    for(int i =0 ;i<6;i++){
        cin>>arr[i];
    }
    // [13,46,24,52,20,9]
    cout<<"Array Before Sorting"<<endl;
    for(int i =0 ;i<6;i++){
        cout<<arr[i]<<" ";
    }

    // applying Bubble sort algorthm
    for (int i = 0; i < 6-1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    cout<<endl;
    cout<<"Array After Sorting"<<endl;
    for(int i =0 ;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}