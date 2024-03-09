#include<iostream>
using namespace std;
int partition(int *arr , int start , int end){
        int povit = arr[start];
        int cnt = 0;
        for(int i = start+1; i<=end; i++){
            if (povit>=arr[i]){
                cnt++;
            }
        }
        int povitRightIndex = start+cnt;
        swap(arr[start],arr[povitRightIndex]);

        int i = start; 
        int j = end;
        while(i < povitRightIndex && j>povitRightIndex){
                while(arr[i]<=povit){
                    i++;
                }
                while(arr[j]>povit){
                    j--;
                }
        while(i < povitRightIndex && j>povitRightIndex){
            swap(arr[i++],arr[j--]);
        }
        }
        return povitRightIndex;
}
void quickSort(int *arr, int start, int end){
    if (start>=end){
        return ;
    }
    int p = partition(arr,start,end) ;
    // right part
    quickSort(arr,p+1,end);

    // left part
    quickSort(arr,0,p-1);
}
int main(){
    int arr[5] = {2,8,3,1,9};
    int size = 5;
    quickSort(arr,0,size-1);
    for(int i =0; i<size;i++){
        cout << arr[i]<<" ";
    }cout<<endl;
}