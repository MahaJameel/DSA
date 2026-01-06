#include <iostream>
#include <vector>
using namespace std;

void reverseVec(vector<int>& vec){
    int start = 0;
    int end= vec.size() - 1;
    while(start < end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main() {

    vector<int> vec = {10,2,3,4,22};
    reverseVec(vec);
    for(int i: vec){
        cout<<i<<" ";
    }
    return 0;
}