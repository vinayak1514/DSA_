#include<iostream>
using namespace std;
void PrintArray(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}
void selectionSort(int arr[] ,int n){
            for(int i = 0; i<n-1; i++){
                for(int j = i+1; j<n; j++){
                    if (arr[i]>arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }  
            }
}

int main(){
    int arr[5] = {5,3,2,7,1};
    selectionSort(arr,5);
    PrintArray(arr,5);
}