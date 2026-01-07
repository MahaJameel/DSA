#include<iostream>
#include<vector>    
using namespace std;
// Function to find the majority element in the array using Boyer-Moore Voting Algorithm
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }

        // if not exist
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                count++;
            }
        }
        if(count>(n/2)){
            return ans;
        }
        else{
            return -1; // No majority element
        }
        return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    cout << majorityElement(nums);

    return 0;
}