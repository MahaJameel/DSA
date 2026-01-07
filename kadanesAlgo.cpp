//kadane'sAlgo
#include <iostream>
#include <vector>   
#include <climits>
using namespace std;    



int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    //Total possible sub arrays
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    //max sum od Sub array

    int maxSum=INT_MIN;

    for(int st=0; st<n; st++){
        int currSum =0;
        for(int end=st;end<n;end++){
            currSum+=arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"Max Sum is: "<<maxSum<<endl;


    //Kadane's Algorithm
    int currSum=0;
    maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Max Sum using Kadane's Algo is: "<<maxSum<<endl;
    return 0;
}