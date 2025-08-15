#include <bits/stdc++.h>
using namespace std;

bool contains_duplicate_brute(vector<int> arr){
    for(int i = 0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false; 
}

int main(){
    vector<int> arr = {1,2,3,4,3,5,6};
    bool check = contains_duplicate_brute(arr);
    cout << "Is it true(1)/false(0) : " << check << endl;
    return 0;
}