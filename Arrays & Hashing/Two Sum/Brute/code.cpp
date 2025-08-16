#include <bits/stdc++.h>
using namespace std;

pair<int,int> two_sum_brute(vector<int> arr,int target){
    for(int i = 0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
        }
    }
    return {-1, -1};
}

int main(){
    vector<int> arr = {16,4,23,8,15,42,1,2};
    int target = 19;
    pair<int,int> indices = two_sum_brute(arr,target);
    if(indices.first != -1) {
    cout << "The numbers are at indices: " << indices.first << " and " << indices.second << endl;
    } 
    else {
    cout << "No pair found that sums to " << target << endl;
    }
    return 0;
}