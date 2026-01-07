#include <iostream>
#include <vector>
using namespace std;

//brute force approach
vector<int> pairSum(vector<int> nums , int target){
    vector<int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

//optimized approach using two pointers
vector<int> pairSumOptimized(vector<int> nums, int target){
    vector<int> ans;
    int i=0, j=nums.size()-1;
    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    
    vector<int> ans=pairSum(nums, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    vector<int> ansOptimized=pairSumOptimized(nums, target);
    cout<<ansOptimized[0]<<" "<<ansOptimized[1]<<endl;
    return 0;
}