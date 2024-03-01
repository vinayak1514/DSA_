#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {12,24,36,48,60,72};
    int odd[5] = {13,26,39,52,65};
    int evenIndex = binarySearch(even,6,72);
    int oddIndex = binarySearch(odd,5,65);
    cout << evenIndex;
    cout << oddIndex;
}