#include<iostream>
#include<vector>
using namespace std;    

int binarySearch(vector<int> arr, int tar){
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid= st + (end-st)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]<tar) st=mid+1;
        else end=mid-1;
    }
    return -1;
}


int main(){
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int result = binarySearch(arr, target);
    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;
    return 0;
}