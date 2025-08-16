#include <bits/stdc++.h>
using namespace std;

pair<int,int> two_sum_better(vector<int> arr,int target){
    // store value and original index
    vector<pair<int,int>> nums;
    for(int i = 0; i < arr.size(); i++)
        nums.push_back({arr[i], i});

    sort(nums.begin(), nums.end()); // sort by value

    int left = 0;
    int right = nums.size() - 1;

    while(left < right){
        int sum = nums[left].first + nums[right].first;
        if(sum > target)
            right--;
        else if(sum < target)
            left++;
        else
            return {nums[left].second, nums[right].second}; // return original indices
    }

    return {-1, -1};
}

int main(){
    vector<int> arr = {16,4,23,8,15,42,1,2};
    int target = 19;
    pair<int,int> indices = two_sum_better(arr,target);

    if(indices.first != -1)
        cout << "The numbers are at indices: " << indices.first << " and " << indices.second << endl;
    else
        cout << "No pair found that sums to " << target << endl;

    return 0;
}
