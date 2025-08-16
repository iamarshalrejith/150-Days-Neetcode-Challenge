#include <bits/stdc++.h>
using namespace std;

pair<int,int> two_sum_better(vector<int> arr,int target){
    unordered_map<int,int> hashmap;
    for(int i = 0;i<arr.size();i++){
        int complement = target - arr[i];
        if(hashmap.find(complement)!=hashmap.end()){
            return {i,hashmap[complement]};
        }
        hashmap[arr[i]] = i;
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
