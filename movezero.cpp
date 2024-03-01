#include<iostream>
using namespace std;

void moving(int arr[],int n ){
    int  j = 0;
    for(int i = 0; i<n; i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<endl;
    }

}
int main(){
    int arr[5] = {0,1,0,3,12};
    moving(arr,5);
    print(arr,5);
}