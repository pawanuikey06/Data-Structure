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

    // applying selection sort algorthm
    for(int i=0 ;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
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