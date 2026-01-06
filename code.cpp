#include <iostream>
using namespace std;    

int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int reverse(int arr[],int size){
    int start =0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr [] = {4,2,7,8,1,2,5};
    int size=7;
    int target = 50;

    cout<< linearSearch(arr,size,target)<<endl;

    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}