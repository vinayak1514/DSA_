#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
    for (int i=0; i<n;i++){
        cout << arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for (int j = 0; j<n-i; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[5] = {5,3,2,7,1};
    bubbleSort(arr,5);
    PrintArray(arr,5);
}